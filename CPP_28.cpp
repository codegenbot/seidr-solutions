string concatenate(vector<string> strings){
    string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}