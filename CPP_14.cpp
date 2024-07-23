vector<string> result;
    string prefix = "";
    for (char ch : str) {
        prefix += ch;
        result.push_back(prefix);
    }
    return result;
}