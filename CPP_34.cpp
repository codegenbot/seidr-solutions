#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

int main() {
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(v);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}