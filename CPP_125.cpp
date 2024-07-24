#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

void split_words(string txt) {
    std::vector<std::string> result;
    size_t pos = 0;
    while ((pos = txt.find(" ")) != std::string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return;
    }
    size_t commaPos = txt.find(",");
    if (commaPos == std::string::npos) {
        int oddCount = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (int(c) % 2 != 0)) {
                oddCount++;
            }
        }
        std::cout << oddCount;
    } else {
        while ((pos = txt.find(" ")) != std::string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }
}