vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){ // If the prefix is found at the start of the string
            result.push_back(str); // Add the string to the result vector
        }
    }
    return result;
}