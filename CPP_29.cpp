```cpp
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == std::string::npos) 
            result.push_back(s); 
    } 
    return result;
}