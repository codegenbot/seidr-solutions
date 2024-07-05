vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter;

    if (txt.find(' ') != string::npos) {
        delimiter = " ";
    } else if (txt.find(',') != string::npos) {
        delimiter = ",";
    } 

    if (!delimiter.empty()) {
        while ((pos = txt.find(delimiter)) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + delimiter.length());
        }
        result.push_back(txt);
    } else {
        int countOdd = 0;
        for (char ch : txt) {
            if (ch >= 'a' && ch <= 'z' && ((ch - 'a') % 2 != 0)) {
                countOdd++;
            }
        }
        result.push_back(to_string(countOdd));
    }

    return result;
}