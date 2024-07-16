#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

using size_t = decltype(size(0));

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; i++) {
        bool isMatch = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            result.push_back(i);
        }
    }
    return result;
}

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "The GCD of " << num1 << " and " << num2 << " is " << findGCD(num1, num2) << endl;
    return 0;
}