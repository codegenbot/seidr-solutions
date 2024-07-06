```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::string b) {
    for (int i = 0; i < a.size(); i++) {
        if (b.find(a[i]) == std::string::npos) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> bf(std::string a, std::string b) {
    int n = 0, m = 0;
    for (char &c : a) {
        if (c == '1') ++n;
    }
    for (char &c : b) {
        if (c == '1') ++m;
    }

    std::vector<std::string> result;

    if (n > m) {
        int i = 0, j = n - m;
        while (i < a.size() && j--) {
            result.push_back(a.substr(i) + "0");
            i++;
        }
        while (j--) {
            result.push_back("0");
        }
    } else if (n < m) {
        int i = 0, j = m - n;
        while (i < b.size() && j--) {
            result.push_back("1" + b.substr(i));
            i++;
        }
        while (j--) {
            result.push_back("1");
        }
    } else {
        for (char &c : a) {
            if (c == '1') {
                result.push_back("1");
            } else {
                result.push_back("0");
            }
        }
    }

    return result;
}