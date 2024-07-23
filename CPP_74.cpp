#include <string>
#include <vector>
#include <algorithm>

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

vector<string> total_match(vector<vector<string>> lst) {
    vector<string> result;

    for (const auto& sublst : lst) {
        vector<string> temp;
        transform(sublst.begin(), sublst.end(), back_inserter(temp), ::tolower);
        sort(temp.begin(), temp.end());
        
        bool found = false;
        for (int i = 0; i < result.size(); i++) {
            if (issame(result[i], temp)) {
                found = true;
                break;
            }
        }

        if (!found) {
            for (const auto& str : temp) {
                result.push_back(str);
            }
        }
    }

    return result;
}

int main() {
    vector<vector<string>> lst = {{"this"}};
    
    vector<string> result = total_match(lst);
    
    return 0;
}