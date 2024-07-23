#include <string>
#include <vector>
#include <algorithm>

bool isSame(vector<string> a, vector<string> b) {
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

vector<string> totalMatch(vector<vector<string>> lst) {
    vector<string> result;

    for (auto& sublst : lst) {
        transform(sublst.begin(), sublst.end(), sublst.begin(), ::tolower);
        sort(sublst.begin(), sublst.end());

        int i = 0, j = 0;
        
        while (i < sublst.size() && j < result.size()) {
            if (sublst[i] == result[j]) {
                result.erase(result.begin() + j);
                i++;
                j--;
            } else if (sublst[i] < result[j]) {
                i++;
            } else {
                j++;
            }
        }

        for (; i < sublst.size(); i++) {
            result.push_back(sublst[i]);
        }
    }

    return result;
}

int main() {
    vector<vector<string>> lst = {{"this"}, {}};
    
    totalMatch(lst);
    
    return 0;
}