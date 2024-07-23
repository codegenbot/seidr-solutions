#include <vector>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

bool issame(const string& s1, const string& s2) {
    return s1.size() == s2.size();
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    
    transform(lst1.begin(), lst1.end(), lst1.begin(), ::tolower);
    transform(lst2.begin(), lst2.end(), lst2.begin(), ::toupper);

    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());

    int i = 0, j = 0;
    
    while (i < lst1.size() && j < lst2.size()) {
        if (issame(lst1[i], lst2[j])) {
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