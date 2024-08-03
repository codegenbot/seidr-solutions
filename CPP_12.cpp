std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "";
    std::string longest = strings[0];
    for(std::string s : strings){
        if(s.length() > longest.length())
            longest = s;
        else if(s.length() == longest.length())
            longest = s;
    }
    return longest;
}