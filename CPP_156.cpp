```cpp
#include <string>
#include <vector>
#include <ostream>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {{std::make_pair(1000, "M"), std::make_pair(900, "CM")}, 
                                     {std::make_pair(500, "D"), std::make_pair(400, "CD")}, 
                                     {std::make_pair(100, "C"), std::make_pair(90, "XC")}, 
                                     {std::make_pair(50, "L"), std::make_pair(40, "XL")}, 
                                     {std::make_pair(10, "X"), std::make_pair(9, "IX")}, 
                                     {std::make_pair(5, "V"), std::make_pair(4, "IV"), std::make_pair(1, "I")} };
    string result = "";
    for (const auto &romanNumber : roman) {
        while (number >= romanNumber.first.first) {
            number -= romanNumber.first.second;
            result += romanNumber.second;
        }
    }
    if(number > 0)
        result.append(to_string(number)); 
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Mini Roman representation of the number is: " << int_to_mini_roman(num) << endl;
    return 0;
}