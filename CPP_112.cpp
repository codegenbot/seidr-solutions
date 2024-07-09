#include <string>
#include <algorithm>

std::pair<std::string, std::string> reverse_delete(const std::string& input_string, const std::string& chars_to_delete) {
    std::string result = "";
    for (char ch : input_string) {
        if (chars_to_delete.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    std::string reversed_result = result;
    std::reverse(reversed_result.begin(), reversed_result.end());

    return { result, result == reversed_result ? "True" : "False" };
}

int main() {
    assert(assert_pair_equal(reverse_delete("mamma", "mia"), { "", "True" }));
}