#include <iostream>
using namespace std;

int main() {
    vector<float> lst = {1.2f, 3.4f, 5.6f};
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}