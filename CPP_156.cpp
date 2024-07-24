```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Roman {
    int value;
    string roman;
};

vector<Roman> romanMap({Roman{1000, "M"}, Roman{900, "CM"}, Roman{500, "D"},
                         Roman{400, "CD"}, Roman{100, "C"}, Roman{90, "XC"},
                         Roman{50, "L"}, Roman{40, "XL"}, Roman{10, "X"},
                         Roman{9, "IX"}, Roman{5, "V"}, Roman{4, "IV"}, Roman{1, "I"}});

string intToRoman(int number) {
    string roman = "";
    
    for (const auto& pair : romanMap) {
        while (number >= pair.value) {
            number -= pair.value;
            roman += pair.roman;
        }
    }
    
    return roman;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The Roman numeral is: " << intToRoman(num) << endl;
}