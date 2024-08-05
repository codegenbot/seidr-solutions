#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> v = {-5, 2, -3, 7, 4};
    cout << "The first basement index is: " << basement(v) << endl;
    return 0;
}