#include <vector>
using namespace std;

int luhn(vector<int> &num) {
    int sum = 0;
    for(int i = num.size() - 1; i >= 0; --i) {
        if(i % 2 == 1) {
            int temp = num[i] * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += num[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    cout << luhn(num) << endl;
    return 0;
}