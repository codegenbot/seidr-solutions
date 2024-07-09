```
#include <sstream>
using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0))
            count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of multiples of 11 or 13 up to " << num << ": " << fizz_buzz(num) << endl;
    return 0;
}