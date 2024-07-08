vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}