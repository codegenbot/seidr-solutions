#include <cctype>

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;

    for (int i = 0; i < lst1.size(); ++i) {
        string s = lst1[i];
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        lst1[i] = s;
    }
    for (int j = 0; j < lst2.size(); ++j) {
        string s = lst2[j];
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
        lst2[j] = s;
    }

    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());

    int i = 0, j = 0;

    while (i < lst1.size() && j < lst2.size()) {
        if (lst1[i] == lst2[j]) {
            result.push_back(lst1[i]);
            i++;
            j++;
        } else if (lst1[i] < lst2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}