string longest(vector<string> strings){
    if (strings.empty()) return "None";
    string longest_string = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longest_string.length()) {
            longest_string = str;
        }
    }
    return longest_string;
}