int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (enter 'stop' to finish):\n";
    while (true) {
        string key, value;
        cin >> key >> value;
        if (key == "stop") break;
        dict[key] = value;
    }
    bool result = check_dict_case(dict);
    cout << (result ? "All keys are either lowercase or uppercase.\n" : "Not all keys are either lowercase or uppercase.\n");
    return 0;
}