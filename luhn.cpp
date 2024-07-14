#include <vector>
using namespace std;

int luhnCheck(vector<int> ccNum) {
    int sum = 0;
    for (int i = 0; i < ccNum.size(); i++) {
        if ((i % 2) == 1) {
            int temp = ccNum[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += ccNum[i];
        }
    }
    return sum;
}

int main() {
    vector<int> ccNum;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ccNum.push_back(x);
    }
    cout << luhnCheck(ccNum) << endl;
    return 0;
}