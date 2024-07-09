```cpp
#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    double num1 = stod(a);
    double num2 = stod(b);

    if (num1 > num2)
        return a;
    else if (num1 < num2)
        return b;
    else
        return "None";
}

int main() {
    cout << compare_one("123.45", "123.45") << endl;  // Returns: None
    cout << compare_one("123.45", "124.56") << endl;  // Returns: 123.45
    cout << compare_one("124.56", "123.45") << endl;  // Returns: 124.56

    return 0;
}