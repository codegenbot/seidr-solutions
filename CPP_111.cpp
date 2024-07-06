map<char,int> histogram(string test){
    map<char,int> result;
    if(test.empty()) return result;
    string temp;
    int max_count = 0;
    for(char c : test + " ") {
        if(c == ' ') {
            if(!temp.empty()) {
                ++result[temp[0]];
                temp.clear();
            }
        } else {
            temp += c;
        }
    }
    if(!temp.empty()) {
        ++result[temp[0]];
        max_count = result[temp[0]];
    }
    for(auto& p : result) {
        if(p.second > 1 || (p.second == 1 && max_count == 1)) {
            cout << "{" << p.first << ", " << p.second << "}" << endl;
        } else {
            return {};
        }
    }
    return result;
}