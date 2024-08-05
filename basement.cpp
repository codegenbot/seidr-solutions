#include <vector>
using namespace std;

int basementIndex(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> v = {{1}, {-1}, {1, -100}, {2, -1, 100}, {2, -95, 100}, {2, -30, 5}};
    for (vector<int> vi : v) {
        cout << "Input: ";
        for (int i : vi) cout << i << " ";
        cout << endl;
        int result = basementIndex(vi);
        if (result == -1) cout << "output: Not Found" << endl;
        else cout << "output: " << result << endl;
    }
    return 0;
}