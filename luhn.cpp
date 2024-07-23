#include <vector>
#include <iostream>
using namespace std;

int luhnCheck(const vector<int>& cc) {
    int sum = 0;
    for (int i = 0; i < cc.size(); i++) {
        if (i % 2 == 1) {
            int temp = cc[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cc[i];
        }
    }
    return sum;
}

int main() {
    vector<int> cc = {4,3,2,1,8,7,6,5,4,3,2,1};
    int result = luhnCheck(cc);
    cout << "Result: " << result << endl;
    return 0;
}