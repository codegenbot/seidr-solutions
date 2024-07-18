#include <vector>
#include <string>
#include <cassert>

class solution_name {
public:
    static std::vector<std::string> odd_count(const std::vector<std::string>& input);
    static bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);
    static int count_odd_digits(const std::string& num);
};

std::vector<std::string> solution_name::odd_count(const std::vector<std::string>& input) {
    std::vector<std::string> result;
    for (const std::string& num : input) {
        result.push_back("the number of odd elements " + std::to_string(solution_name::count_odd_digits(num)) +
                         "\nthe string " + num + " of the input.");
    }
    return result;
}

bool solution_name::issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int solution_name::count_odd_digits(const std::string& num) {
    int count = 0;
    for (char digit : num) {
        if (isdigit(digit) && (digit - '0') % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(issame(solution_name::odd_count({"271", "137", "314"}), {
        "the number of odd elements 1\nthe string 271 of the input.",
        "the number of odd elements 2\nthe string 137 of the input.",
        "the number of odd elements 2\nthe string 314 of the input."
    }));
    return 0;
}