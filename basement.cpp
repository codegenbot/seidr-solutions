#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) return i + 1;
    }
    return -1;
}

int main() {
    vector<int> v = {1,-2,3,10,1};
    int index = basement(v);
    if (index == -1) cout << "No such index found." << endl;
    else cout << "The first negative sum is at index: " << index << endl;
    return 0;
}