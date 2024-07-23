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

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;

    transform(lst1.begin(), lst1.end(), lst.begin(), ::tolower);
    for (const string& str : lst1) {
        for (const string& s : lst2) {
            if (issame({str}, {s})) {
                result.push_back(str); 
                break;
            }
        }
    }

    return result;
}

int main() {
    assert (issame(total_match({"this"}, {}), {}));
    return 0;
}