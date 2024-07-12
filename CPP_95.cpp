int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (separated by space), then press Enter to stop: ";
    string line;
    while (getline(cin, line)) {
        size_t equalPos = line.find('=');
        if (equalPos != string::npos) {
            string key = line.substr(0, equalPos);
            string value = line.substr(equalPos + 1);
            dict.insert({key, value});
        } else {
            break;
        }
    }

    bool result = check_dict_case(dict);

    cout << "Dictionary case: " << (result ? "consistent" : "inconsistent") << endl;

    return 0;
}