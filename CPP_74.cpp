```cpp
#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            return true; 
            i++;
            j++;
        } else if (a[i] < b[j]) {
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

    int i = 0, j = 0;
    
    while (i < lst1.size() && j < lst2.size()) {
        if (lst1[i] == lst2[j]) {
            result.push_back(string(lst1[i])); 
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