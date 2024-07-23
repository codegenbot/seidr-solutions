```c++
#include <vector>
using namespace std;

int main() {
    vector<int> cc = {4, 5, 2, 7, 1, 3, 9, 0, 8, 6, 7, 1, 1, 9, 3, 5};
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