#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> lst1 = {"abc", "pqr", "xyz"};
    vector<string> lst2 = {"abc", "pqr", "xyz"};

    if(issame(lst1, lst2)) cout << "The lists are same." << endl;
    else cout << "The lists are not same." << endl;

    return 0;
}