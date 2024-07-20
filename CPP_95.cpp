#include <map>
#include <string>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0]) && !islower(pair.first[0])) {
            all_upper = false;
            all_lower = false;
            break;
        } else if ((isupper(pair.first[0]) && !all_upper) || (islower(pair.first[0]) && !all_lower)) {
            all_upper = all_lower = false;
        }
    }

    return all_upper || all_lower;
}

int main() {
    assert(check_dict_case({}) == false);
    map<string, string> dict1 = {{"A", "B"}, {"C", "D"}};
    cout << check_dict_case(dict1) << endl;  // Output: 0
    map<string, string> dict2 = {{"a", "b"}, {"c", "d"}};
    cout << check_dict_case(dict2) << endl;  // Output: 1
    map<string, string> dict3 = {{"A", "a"}, {"C", "c"}};
    cout << check_dict_case(dict3) << endl;  // Output: 1
    return 0;
}