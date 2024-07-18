vector<string> result;
    size_t pos = 0;
    string delimiter = " ,";
    while ((pos = txt.find_first_of(delimiter)) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (!txt.empty()) {
        result.push_back(txt);
    }
    if (result.size() == 1) {
        int count = 0;
        for(char ch : result[0]) {
            if (islower(ch) && ((ch - 'a') % 2 == 1))
                count++;
        }
        result[0] = to_string(count);
    }
    return result;
}