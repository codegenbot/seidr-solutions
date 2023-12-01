#include <vector>
#include <algorithm>

vector<int> common(vector<int> l1,vector<int> l2){
vector<int> result;
sort(l1.begin(), l1.end());
sort(l2.begin(), l2.end());

int i = 0;
int j = 0;

while (i < l1.size() && j < l2.size()) {
    if (l1[i] < l2[j]) {
        i++;
    } else if (l1[i] > l2[j]) {
        j++;
    } else {
        if (result.empty() || result.back() != l1[i]) {
            result.push_back(l1[i]);
        }
        i++;
        j++;
    }
}

return result;
}

bool issame(vector<int> a,vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 4};
    
    vector<int> result = common(a, b);
    
    if (issame(result, {1, 2})) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}