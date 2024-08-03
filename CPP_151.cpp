#include <vector>
#include <cmath>

int main() {
    vector<float> lst;
    long long odd_sum = 0;

    cin >> lst;

    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                odd_sum += pow(num, 2);
            }
        }
    }

    cout << "The sum of the squares of all positive integers in the input list is: " << odd_sum << endl;

    return 0;
}