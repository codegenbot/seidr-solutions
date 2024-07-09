bool issame(string s1, string s2) {
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "almond"};
    string prefix = "a";
    for(string s : filter_by_prefix(strings, prefix)) {
        if (issame(s, prefix))
            cout << s << " is same as the prefix." << endl;
        else
            cout << s << " is not same as the prefix." << endl;
    }
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}