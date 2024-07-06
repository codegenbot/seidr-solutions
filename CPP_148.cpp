#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string b) {
    int i = 0;
    while (i < a.size()) {
        if (a[i] == 'B') {
            for (int j = i; j < a.size() && a[j] != 'E'; j++) {
                if (j > i && a[j] == ' ') {
                    i = j + 1;
                    break;
                }
            }
            std::string word = "";
            while (i < a.size() && a[i] != 'E') {
                if (a[i] == ' ') {
                    break;
                } else {
                    word += a[i];
                    i++;
                }
            }
            b += " " + word;
        } else {
            i++;
        }
    }
    return std::vector<std::string>(0).swap(b == "" ? std::vector<std::string>(1, "") : split(b));
}

std::vector<std::string> split(std::string str) {
    size_t start = 0;
    size_t end = str.find(' ');
    std::vector<std::string> result;

    while (end != std::string::npos) {
        result.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(' ', start);
    }

    result.push_back(str.substr(start));
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}