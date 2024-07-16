```c++
#include <vector>
using namespace std;

int basement(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ) {
        sum += v[i];
        if (sum < 0)
            return i;
        i++;
    }
    return -1;
}

int main() {
    vector<int> v = {-5, -1, 3, 4, -2};
    int result = basement(v);
    cout << "Basement index: " << result << endl;
    return 0;
}