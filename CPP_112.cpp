#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // implement your comparison logic here
    return true;  // or false depending on the comparison result
}

std::pair<std::string, bool> reverse_delete(const std::string& s1, const std::string& s2) {
    int i = s1.size() - 1;
    for (int j = s2.size() - 1; j >= 0; --j, --i) {
        if (s1[i] != s2[j]) return {s1.substr(0, i+1), false};
    }
    return {s1.substr(i+1), true};
}

int main() {
    std::pair<std::string, bool> result = reverse_delete("mamma", "amma");
    if (result.second) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << result.first << std::endl;
    }
    return 0;
}