bool issame(vector<string> a,vector<string>b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the vector
    lst.erase(remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.size() % 2 != 0; }), lst.end());
    
    // Sort the remaining strings by length and then alphabetically
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            } else {
                return a.size() < b.size();
            }
        });
    
    return lst;
}

int main(){
    assert (issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) , {"cc","dd","aaaa","bbbb"}));
    return 0;
}