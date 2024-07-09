vector<int> filter_integers(initializer_list<variant<int>> values) {
    vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = any_cast<int>(value);
            if(find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}