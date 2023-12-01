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

bool issame(vector<int> a,vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {4, 5, 6, 7};

    vector<int> result = common(l1, l2);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    cout << endl;
    
    bool same = issame(l1, l2);
    
    if (same) {
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }
    
    return 0;
}