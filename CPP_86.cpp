string anti_shuffle(string s){
    string result = "";
    for (const auto& word : split(s, " ")) {
        string temp = "";
        for(auto c:word)
            temp += c;
        result += temp + " ";
    }
    return result.substr(0, result.size() - 1);
}