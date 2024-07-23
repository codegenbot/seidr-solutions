#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(tolower(a[i]) != tolower(b[i]))
            return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    
    transform(lst1.begin(), lst1.end(), lst1.begin(), ::tolower);
    for(auto& s : lst2) { 
        std::string newStr = std::move(s); 
        for(char & c: newStr) {
            c = toupper(c);
        }
    }

    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());

    int i = 0, j = 0;
    
    while (i < lst1.size() && j < lst2.size()) {
        if (lst1[i] == lst2[j]) {
            result.push_back(string("")); 
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