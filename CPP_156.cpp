#include <string>
#include <vector>

using namespace std;

int main() {
    int number;
    cin >> number;

    string result = int_to_mini_roman(number);
    cout << result;

    return 0;
}