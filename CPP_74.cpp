```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

int total_match(const std::vector<std::vector<std::string>>& input, const std::vector<std::vector<std::string>>& matches) {
    int count = 0;
    for (const auto& str : input) {
        bool found = false;
        for (const auto& match : matches) {
            if (issame({str}, match)) {
                found = true;
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return count;
}

void get_user_input(std::vector<std::vector<std::string>>& user_input) {
    std::string temp;
    std::cout << "Enter strings (enter 'stop' when done): ";
    while (true) {
        std::cin >> temp;
        if (temp == "stop") break;
        user_input.push_back(std::vector<std::string>(1, temp));
    }
}

int main() {
    std::vector<std::vector<std::string>> user_input;
    get_user_input(user_input);
    std::vector<std::vector<std::string>> input = {{"this"}};
    std::vector<std::vector<std::string>> matches = {};
    std::cout << "Count of matches is: " << total_match(input, matches) << std::endl;
    return 0;
}