#include <vector>
#include <string>

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + " in the string " + std::to_string(i+1));
    }
    return result;
}

int main() {
    std::vector<std::string> test = {"271", "137", "314"};
    std::vector<std::string> result = odd_count(test);
    for (const auto& s : result) {
        std::cout << s << std::endl;
    }
}