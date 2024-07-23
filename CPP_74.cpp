#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> bstr) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(bstr.begin(), bstr.end(), bstr.begin(), ::tolower);

    sort(a.begin(), a.end());
    sort(bstr.begin(), bstr.end());

    int i = 0;
    for (int j = 0; i < a.size() && j < bstr.size(); ++i, ++j) {
        if (a[i] == bstr[j]) {
            return true;
        } else if (a[i] < bstr[j]) {
            i++;
        } else {
            j++;
        }
    }

    return false;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;

    transform(lst1.begin(), lst1.end(), lst1.begin(), ::tolower);
    transform(lst2.begin(), lst2.end(), lst2.begin(), ::toupper);

    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());

    int i = 0;
    for (int j = 0; i < lst1.size() && j < lst2.size(); ++i, ++j) {
        if (lst1[i] == lst2[j]) {
            result.push_back(string(&lst1[i][0])); 
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