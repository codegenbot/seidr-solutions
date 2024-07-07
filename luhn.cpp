#include <iostream>
#include <vector>
using namespace std;

int luhn(vector<int>& cc) {
    int sum = 0;
    bool isDouble = false;
    for(int i=cc.size()-1; i>=0; i--) {
        if(isDouble) {
            int temp = cc[i] * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cc[i];
        }
        isDouble = !isDouble;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cc(n);
    for(int i=0; i<n; i++) {
        cin >> cc[i];
    }
    cout << luhn(cc) << endl;
    return 0;
}