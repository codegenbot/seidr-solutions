#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> odd_count(const std::vector<std::string>& input);

std::vector<std::string> odd_count(const std::vector<std::string>& input) {
    std::vector<std::string> result;
    for (const std::string& str : input) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("The number of odd elements in the string " + std::to_string(count) + " of the input.");
    }
    return result;
}

int main() {
    std::vector<std::string> input = {"12345", "67890", "13579"};
    std::vector<std::string> result = odd_count(input);
    for (const std::string& res : result) {
        std::cout << res << std::endl;
    }
    return 0;
}