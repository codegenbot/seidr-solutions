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
    map<string, string> dict;
    dict["A"] = "1";
    dict["a"] = "2";
    cout << (check_dict_case(dict) ? "True" : "False") << endl;
}