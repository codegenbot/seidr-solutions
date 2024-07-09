```
int main() {
    map<string,string> dict;
    string input;
    cout << "Enter dictionary words (separated by commas): ";
    cin >> input;
    int count = 0;
    for(auto &p : split(input, ',')){
        dict[p] = p;
        count++;
    }
    
    if(count == 0) return 0;
    
    if(check_dict_case(dict)) {
        cout << "Dictionary is in case" << endl;
    } else {
        cout << "Dictionary is not in case" << endl;
    }
    
    return 0;
}

vector<string> split(const string& str, char delimiter){
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delimiter, prev);
        if(pos == string::npos) break;
        string token = str.substr(prev, pos - prev);
        tokens.push_back(token);
        prev = pos + 1;
    } while(pos != string::npos);
    
    // Last token
    tokens.push_back(str.substr(prev));
    return tokens;
}