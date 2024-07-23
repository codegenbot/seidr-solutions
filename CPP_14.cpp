vector<string> result;
    string current_prefix = "";
    for (char c : str) {
        current_prefix += c;
        result.push_back(current_prefix);
    }
    return result;