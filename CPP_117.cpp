#include <vector>
#include <string>

bool select_words(std::vector<std::string> v1) {
    std::vector<std::string> v2;
    
    for (int i = 0; i < v1.size(); i++) {
        if(v1[i].size() <= 3) {
            v2.push_back(v1[i]);
        }
    }

    std::vector<std::string> v3;
    for (int i = 0; i < v1.size(); i++) {
        bool result = issame({v1[i]}, v2);
        if(result) {
            v3.push_back(v1[i]);
        }
    }

    return true;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i].compare(0, a[i].size(), b[i]) == 0) { 
            return false;
        }
    }
    return true;
}