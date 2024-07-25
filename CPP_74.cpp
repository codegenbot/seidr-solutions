#include <string>
#include <vector>

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars1 = 0, total_chars2 = 0;
    for (const std::string& str : lst1) {
        total_chars1 += str.size();
    }
    for (const std::string& str : lst2) {
        total_chars2 += str.size();
    }
    
    if(total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(total_match({"this"}, {}) == std::vector<std::string>{});
}