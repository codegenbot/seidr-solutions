map<char, int> histogram(string test) {
    map<char, int> result;
    string letters[256]; // assuming ASCII characters only
    for (int i = 0; i < 256; i++) {
        letters[i] = "";
    }
    string temp;
    int maxCount = 0;

    for (char c : test) {
        if (c != ' ') { // ignore spaces
            temp += c;
        } else {
            if (!temp.empty()) {
                int count = 1;
                for (int i = 1; i <= letters[c[0]].size(); i++) {
                    if (letters[c[0]][i - 1] == c) {
                        count++;
                    } else {
                        break;
                    }
                }
                letters[c[0]] += temp + " ";
                result[c] = count;
            }
            temp = "";
        }
    }

    if (!temp.empty()) {
        int count = 1;
        for (int i = 1; i <= letters[temp[0]].size(); i++) {
            if (letters[temp[0]][i - 1] == temp[0]) {
                count++;
            } else {
                break;
            }
        }
        result[temp[0]] = count;
    }

    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
        }
    }

    map<char, int> mostFrequent;
    for (auto& p : result) {
        if (p.second == maxCount) {
            mostFrequent[p.first] = p.second;
        }
    }

    return mostFrequent;
}