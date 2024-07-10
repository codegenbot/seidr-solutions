if(strings.empty())
        return "None";
    
    string longest_str = strings[0];
    for(const auto& s : strings){
        if(s.length() > longest_str.length() || (s.length() == longest_str.length() && s < longest_str)){
            longest_str = s;
        }
    }
    
    return longest_str;
}