#include <vector>
using namespace std;

int solve(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int new_num = (num / 3) - 2;
        sum += new_num;
    }
    return sum;
}

int main() {
    int n, a;
    vector<int> b;

    cin >> n;
    while(n--){
        cin >> a;
        b.push_back(a);
    }

    cout << solve(b);

    return 0;
}