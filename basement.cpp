```c++
#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) return i;
        if (sum > 0) sum = 0;
    }
    return -1;
}

int main() {
    vector<int> v = {-1, -2, 3, 4};
    int result = basement(v);
    cout << "Basement index: " << result << endl;
    return 0;
}