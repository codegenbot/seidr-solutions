```c++
#include <vector>
using namespace std;

int basementIndex(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> v = {-2, 3, 1, -5, 4};
    int result = basementIndex(v);
    cout << "Basement index: " << result << endl;
    return 0;
}