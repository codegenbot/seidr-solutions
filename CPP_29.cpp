```cpp
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
        else{
            int p = s.find(prefix);
            if(p != std::string::npos && p == 0)
                result.push_back(s);
        }
    }
    return result;