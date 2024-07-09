#include <iostream>
using namespace std;

int main() {
    vector<float> lst = {1.5f, -2.3f, 3.8f};
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}