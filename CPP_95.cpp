```cpp
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> dict;
    int n;
    cin >> n;

    for(int i = 0; i<n ; i++) {
        string key, value;
        cin >> key >> value;
        dict[key] = value;
    }

    bool result = check_dict_case(dict);
    if(result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = std::find_if(it->first.begin(), it->first.end(),
            [](char c){ return tolower(c) != c; }).base() == &it->first[0];
        if (allLower) allLower = std::find_if(it->first.begin(), it->first.end(),
            [](char c){ return toupper(c) != c; }).base() == &it->first[0];
    }

    return allUpper && allLower;
}