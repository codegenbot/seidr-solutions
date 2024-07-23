string string_sequence(int n){
    string result = "";
    for(int i = 0; i <= n; ++i){
        result += to_string(i) + " ";
    }
    result.pop_back(); // to remove extra space at the end
    return result;
}