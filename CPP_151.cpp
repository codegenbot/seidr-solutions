#include <vector>
#include <cmath>

int main() {
    vector<float> lst;
    long long odd_sum = 0;

    cout << "Enter numbers (type 'q' to quit):" << endl;
    while (true) {
        string numStr;
        cin >> numStr;
        if (numStr == "q") break;

        float num = stof(numStr);
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                odd_sum += pow(num, 2);
            }
        }

    }
    cout << "The sum of the squares of the odd numbers is: " << odd_sum << endl;
}