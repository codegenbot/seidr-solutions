Here is the completed code:

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(" ")) != string::npos || (pos = txt.find(",")) != string::npos) {
        if (pos == string::npos) {
            size_t nextSpace = txt.find(" ");
            if (nextSpace == string::npos) {
                result.push_back(txt.substr(0));
                break;
            } else {
                pos = nextSpace;
            }
        }
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    size_t sum = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z') {
            sum += (c - 'a');
        }
    }
    result.push_back(to_string(sum));
    return result;
}