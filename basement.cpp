#include <vector>
using namespace std;

int basementIndex(vector<int>& v) {
    int sum = 0;
    int i = 0;
    while (i < v.size()) {
        sum += v[i];
        if (sum < 0)
            return i;
        i++;
    }
    return -1; // not found
}

int main() {
    vector<int> v1 = {-1};
    cout << basementIndex(v1) << endl;

    vector<int> v2 = {1, -100};
    cout << basementIndex(v2) << endl;

    vector<int> v3 = {2, -1, 100};
    cout << basementIndex(v3) << endl;

    vector<int> v4 = {2, -95, 100};
    cout << basementIndex(v4) << endl;

    vector<int> v5 = {2, -30, 5};
    cout << basementIndex(v5) << endl;
    return 0;
}