#include <vector>
using namespace std;

int main() {
    vector<int> v = {-1,-2,1,3};
    cout << "The basement is at index: " << basement(v) << endl;
    return 0;
}

int basement(vector<int>& v) {
    int total = 0;
    for (int i = 0; i < v.size(); i++) {
        total += v[i];
        if (total < 0)
            return i;
    }
    return -1;
}