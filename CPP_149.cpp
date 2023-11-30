vector<string> vector_sort(vector<string> lst){
    vector<string> result;
    for(const auto& str : lst){
        if(str.length() % 2 == 0){
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), [](const string& str1, const string& str2){
        if(str1.length() == str2.length()){
            return str1 < str2;
        }
        return str1.length() < str2.length();
    });
    return result;
}