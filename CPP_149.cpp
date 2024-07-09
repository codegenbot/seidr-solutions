vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    vector<string> stringsOfEvenLength;

    // Split the strings into strings of even length
    for (auto &str: result) {
        if (str.length() % 2 == 0) {
            stringsOfEvenLength.push_back(str);
        }
    }

    std::sort(stringsOfEvenLength.begin(), stringsOfEvenLength.end());

    return stringsOfEvenLength;
}