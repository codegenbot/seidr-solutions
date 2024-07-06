```cpp
string anti_shuffle(string s){
    if(s.empty())
        return "";
    
    string result = "";
    for (const auto& word : split(s, " ")) {
        result += string(word.begin(), word.end()) + " ";
    }
    return result.substr(0, result.size() - 1);
}