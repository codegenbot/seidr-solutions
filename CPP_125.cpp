vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') != string::npos) {
                result.push_back(txt.substr(0, txt.find(',')));
                txt.erase(0, txt.find(','));
            } else {
                return vector<string>(1, to_string(count_lowercase(txt)));
            }
        }
        size_t nextPos = txt.find_first_of(" ,", pos + 1);
        if (nextPos != string::npos) {
            result.push_back(txt.substr(pos, nextPos - pos));
            pos = nextPos;
        } else {
            result.push_back(txt.substr(pos));
            break;
        }
    }

    return result;
}

int count_lowercase(string txt) {
    int count = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z') {
            count++;
        }
    }
    return count % 2 != 0 ? to_string(count) : vector<string>(1, "0");
}