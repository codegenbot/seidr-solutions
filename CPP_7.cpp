vector<string> filtered;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            filtered.push_back(str);
        }
    }
    return filtered;
}