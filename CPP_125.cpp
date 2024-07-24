vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0, prevPos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos)
                return {to_string(count_lower(txt))};
            else
                result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
            prevPos = pos;
        } else {
            result.push_back(txt.substr(prevPos, pos - prevPos));
            txt.erase(0, pos);
            prevPos = pos;
        }
    }
    if (txt.length() > 0)
        result.push_back(txt);

    return result;
}

int count_lower(string s) {
    int count = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            count++;
    }
    return count;
}