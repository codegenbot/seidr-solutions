#include <vector>
using namespace std;

int solution(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += (i / 3) - 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &x : vec) {
        cin >> x;
    }
    cout << solution(vec) << endl;
    return 0;
}