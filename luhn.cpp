```c++
#include <vector>
using namespace std;

int main() {
    vector<int> cc = {4, 5, 2, 8, 6, 9, 1, 7, 3, 5, 0, 8, 4, 1, 5, 9};
    int result = luhnCheck(cc);
    cout << "Result: " << result << endl;
    return 0;
}

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