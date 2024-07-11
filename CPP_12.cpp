string longest(vector<string> strings){
    if(strings.empty()) return ""; // Return empty string for an empty vector
    string longest = strings[0];
    for(auto s : strings){
        if(s.length() > longest.length()) longest = s;
        else if(s.length() == longest.length()) longest = s; // First one with same length takes priority
    }
    return longest;
}