#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result = l;
    sort(result.begin(), result.end());
    for(int i = 0; i < result.size() - 1; i++) {
        if(result[i] == result[i+1]) {
            result.erase(result.begin() + i);
            i--;
        }
    }
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    l = unique(l);
    for(int i: l) cout << i << " ";
    return 0;
}