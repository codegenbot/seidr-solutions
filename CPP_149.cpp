#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> lst1 = {"A", "B", "C"};
    vector<string> lst2 = {"A", "B", "C"};
    
    bool result = issame(lst1, lst2);
    
    if(result) {
        cout << "The two lists are same." << endl;
    } else {
        cout << "The two lists are not same." << endl;
    }
    
    return 0;
}