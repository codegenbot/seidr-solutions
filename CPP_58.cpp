
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    return (a == b);
}

vector<int> common(vector<int> a, vector<int> b){
    vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        if (b.find(a[i]) != -1) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    assert (issame(common({4, 3, 2, 8}, {}), {}) == false);
    assert (issame(common({4, 3, 2, 8}, {4, 3, 2, 8}), {4, 3, 2, 8}) == true);
    return 0;
}