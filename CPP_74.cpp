```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> bstr) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(bstr.begin(), bstr.end(), bstr.begin(), ::tolower);

    sort(a.begin(), a.end());
    sort(bstr.begin(), bstr.end());

    int i = 0, j = 0;
    
    while (i < a.size() && j < bstr.size()) {
        if (a[i] == bstr[j]) {
            return true; 
            i++;
            j++;
        } else if (a[i] < bstr[j]) {
            i++;
        } else {
            j++;
        }
    }

    return false;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    std::vector<std::string> result;

    transform(lst1.begin(), lst1.end(), lst1.begin(), ::tolower);
    transform(lst2.begin(), lst2.end(), lst2.begin(), ::toupper);

    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());

    int i = 0, j = 0;
    
    while (i < lst1.size() && j < lst2.size()) {
        if (lst1[i] == std::string(&lst2[j][0]).substr(0)).toupper())) {
            result.push_back(std::string(&lst1[i][0])); 
            i++;
            j++;
        } else if (lst1[i] < std::string(&lst2[j][0]).substr(0)).toUpperCase()) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}