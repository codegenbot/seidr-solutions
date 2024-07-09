#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    int temp = n;
    while (temp != 1) {
        if (temp % 2 == 0) {
            temp = temp / 2;
        } else {
            temp = 3 * temp + 1;
        }
        if (temp % 2 != 0) {
            result.push_back(temp);
        }
    }
    return result;
}