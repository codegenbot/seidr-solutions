vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool same(vector<string> a, vector<string> b) {
    bool flag = true;
    for(int i = 0; i < min(a.size(), b.size()); i++){
        if(!same(string_to_tuple(a[i]), string_to_tuple(b[i]))){
            flag = false;
            break;
        }
    }
    return flag;
}

tuple<char, char> string_to_tuple(const string& str) {
    return make_tuple(str[0], str.back());
}

int main() {
    assert(same({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")}, {"grunt", "prune"}));
    return 0;
}