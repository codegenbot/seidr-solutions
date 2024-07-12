int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (separated by ':'). Type 'q' to quit: ";
    while(true) {
        string line;
        getline(cin, line);
        if(line == "q") break;
        size_t pos = line.find(":");
        if(pos != string::npos) {
            string key = line.substr(0, pos);
            string value = line.substr(pos+1);
            dict[key] = value;
        } else {
            cout << "Invalid input. Please enter a valid key-value pair.\n";
        }
    }
    if(dict.empty()) {
        cout << "No dictionary was entered.\n";
    } else {
        bool result = check_dict_case(dict);
        if(result) {
            cout << "The dictionary has either all keys in lowercase or uppercase.\n";
        } else {
            cout << "The dictionary contains both lowercase and uppercase keys.\n";
        }
    }
    return 0;
}