#include<iomanip>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>

void split_words(string txt) {
    size_t pos = 0;
    while ((pos = txt.find(" ")) != string::npos) {
        std::cout << txt.substr(0, pos) << std::endl;
        txt.erase(0, pos + 1);
    }
    if (!txt.empty()) {
        if (txt.find(",") == string::npos) {
            int oddCount = 0;
            for (char c : txt) {
                if (c >= 'a' && c <= 'z' && (int(c) % 2 != 0)) {
                    oddCount++;
                }
            }
            std::cout << oddCount << std::endl;
        } else {
            while ((pos = txt.find(" ")) != string::npos) {
                std::cout << txt.substr(0, pos) << std::endl;
                txt.erase(0, pos + 1);
            }
            if (!txt.empty()) {
                std::cout << txt << std::endl;
            }
        }
    }
}