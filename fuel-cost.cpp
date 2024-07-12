#include <vector>
using namespace std;

int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3);
        temp = temp - 2;
        sum += temp;
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    while(n--) {
        int x; cin >> x;
        input.push_back(x);
    }
    cout << solve(input) << endl;
    return 0;
}