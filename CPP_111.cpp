map<char, int> histogram(string test) {
    map<char, int> result;
    string str = test + " ";
    int max_count = 0;
    char max_char = ' ';

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            if (result.find(str[i]) == result.end()) {
                result[str[i]] = 1;
            } else {
                result[str[i]]++;
            }
            if (result[str[i]] > max_count) {
                max_count = result[str[i]];
                max_char = str[i];
            }
        }
    }

    map<char, int> final_result;
    for (auto& pair : result) {
        if (pair.second == max_count) {
            final_result[pair.first] = pair.second;
        }
    }
    return final_result;
}