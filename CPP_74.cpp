#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int total_chars1 = 0, total_chars2 = 0;

    for (const auto& str : lst1) {
        total_chars1 += str.length();
    }
    for (const auto& str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else if (total_chars1 > total_chars2) {
        return lst2;
    } else {
        return lst1.size() == 0 ? lst1 : lst2;
    }
}