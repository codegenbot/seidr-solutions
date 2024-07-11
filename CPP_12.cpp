if(strings.empty()) {
    return "";
} else {
    string longest_str = *max_element(strings.begin(), strings.end(),
        [](const string& s1, const string& s2) { 
            return s1.size() < s2.size(); 
        });
    return longest_str;
}