#include <unordered_map>
#include <cassert>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;

    bool isLower = true, isUpper = true;
    for(auto const& pair : dict) {
        for(char c : pair.first) {
            if(islower(c)) {
                isUpper = false;
            } else if(isupper(c)) {
                isLower = false;
            }
        }
    }

    return isLower || isUpper;
}

int main() {
    // Example main function for testing
    std::unordered_map<std::string, int> dict = {{"Hello", 5}, {"World", 3}};
    assert(check_dict_case(dict) == true);

    return 0;
}