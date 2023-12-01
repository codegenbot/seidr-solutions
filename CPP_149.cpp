vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        if(s.length() % 2 == 0){
            result.push_back(s);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    vector<string> expected = {"cc", "dd", "aaaa", "bbbb"};
    assert(issame(result, expected) == true);
    
    return 0;
}