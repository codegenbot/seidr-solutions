bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if(a.length() == b.length())
            return a < b;
        return a.length() < b.length();
    });
    return lst;
}