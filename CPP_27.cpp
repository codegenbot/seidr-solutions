for(int i=0; i<str.length(); i++){
    char c = str[i];
    if(std::islower(c))
        result.push_back(std::toupper(c));
    else if(std::isupper(c))
        result.push_back(std::tolower(c));
    else
        result.push_back(c);
}