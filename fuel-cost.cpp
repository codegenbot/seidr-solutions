#include <vector>
using namespace std;

int solve(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3; // divide by 3
        temp = temp - 2; // subtract 2
        sum += temp; // add to the sum
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    cout << solve(vec) << endl;
    return 0;
}