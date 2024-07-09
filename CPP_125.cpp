vector<string> split_words(string txt){
    vector<string> result;
    size_t start = 0;
    while (start < txt.length()) {
        if (isspace(txt[start])) {
            start++;
            continue;
        }
        size_t end = txt.find(' ', start);
        if (end == string::npos) {
            end = txt.find(',');
            if (end == string::npos)
                return {to_string(count(toupper(txt.substr(start)), 'A') + count(toupper(txt.substr(start)), 'a'))};
            start = end + 1;
        } else {
            result.push_back(txt.substr(start, end - start));
            start = end + 1;
        }
    }
    result.push_back(txt.substr(start));
    return result;
}