int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (separated by commas and colon): ";
    cin >> ws;
    string input;
    while (getline(cin, input)) {
        size_t pos = input.find(":");
        if (pos != string::npos) {
            string key = input.substr(0, pos);
            string value = input.substr(pos + 1);
            dict.insert({key, value});
        }
    }
    cout << "All keys are either lower case or upper case: " << check_dict_case(dict) << endl;
    return 0;
}