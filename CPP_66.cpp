#include <string>
#include <cctype>
#include <cassert>
using namespace std;

int digitSum(const string& s);

int main() {
    string input;
    cin >> input;
    int result = digitSum(input);
    cout << result << endl;
    return 0;
}

int digitSum(const string& s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c;
        }
    }
    return sum;
}