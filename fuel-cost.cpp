#include <vector>
using namespace std;

int solve(vector<int> &v) {
    int sum = 0;
    for (int x : v) {
        sum += ((x / 3) - 2);
    }
    return sum;
}

int main() {
    vector<int> inputs;
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        inputs.push_back(num);
    }
    cout << solve(inputs) << endl;
    return 0;
}