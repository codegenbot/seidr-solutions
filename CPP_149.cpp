vector<string> sorted_list_sum(vector<string> lst) {
    auto isEven = [](const string& a) {return a.length() % 2 == 0;};

    vector<string> result;
    for (string str : lst) {
        if (isEven(str)) {
            if (result.empty()) {
                result.push_back(str);
            } else if (!isEven(result.back())) {
                result.clear();
                result.push_back(str);
            }
        } else {
            if (!isEven(result.back())) {
                result.push_back(str);
            }
        }
    }

    return result;
}