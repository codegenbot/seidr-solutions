vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter;

    if (txt.find(' ') != string::npos) {
        delimiter = " ";
    } else if (txt.find(',') != string::npos) {
        delimiter = ",";
    } else {
        int odd_count = 0;
        for (char c : txt) {
            if (islower(c) && ((c - 'a') % 2 == 0)) {
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
        return result;
    }

    while ((pos = txt.find(delimiter)) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + delimiter.length());
    }
    result.push_back(txt);

    return result;
}