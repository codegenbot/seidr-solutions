```cpp
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::pair<std::string, std::string>& dict[]) {
    if (dict[0].first.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (int i = 0; i < sizeof(dict) / sizeof(dict[0]); i++) {
        if (!islower(dict[i].first[0]) && !isupper(dict[i].first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((dict[i].first[0] >= 'a' && dict[i].first[0] <= 'z') != (allLower)) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}

int main() {
    const std::pair<std::string, std::string>[] dict = {{ "key1", "value1" }, { "key2", "value2" }};
    bool result = check_dict_case(dict);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}