vector<string> prefixes;
    string prefix = "";
    for (char ch : str) {
        prefix += ch;
        prefixes.push_back(prefix);
    }
    return prefixes;
}