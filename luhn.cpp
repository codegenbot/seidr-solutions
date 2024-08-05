#include <vector>
using namespace std;

int luhn(vector<int> cc) {
    int sum = 0;
    for(int i = 0; i < cc.size(); i++) {
        if(i % 2 == 1) {
            cc[i] *= 2;
            if(cc[i] > 9) {
                cc[i] -= 9;
            }
        }
    }
    for(auto x : cc) sum += x;
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cc(n);
    for(int i = 0; i < n; i++) {
        cin >> cc[i];
    }
    cout << luhn(cc) << endl;
    return 0;
}