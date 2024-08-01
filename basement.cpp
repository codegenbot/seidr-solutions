#include <vector>
using namespace std;

int basementIndex(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    // test cases
    vector<int> v1({1});
    cout << basementIndex(v1) << endl;

    vector<int> v2({1, -100});
    cout << basementIndex(v2) << endl;

    vector<int> v3({2, -1, 100});
    cout << basementIndex(v3) << endl;

    vector<int> v4({2, -95, 100});
    cout << basementIndex(v4) << endl;

    vector<int> v5({2, -30, 5});
    cout << basementIndex(v5) << endl;
    
    return 0;
}