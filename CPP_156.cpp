```cpp
#include <vector>
#include <string>

using namespace std;
vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string int_to_mini_romank(int number) {
    std::string result;
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        while (number >= values[i]) {
            number -= values[i];
            result += romanNumerals[i];
        }
    }
    return tolower(result);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Roman numeral for " << num << ": " << int_to_mini_romank(num) << endl;
    return 0;
}