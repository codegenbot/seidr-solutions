#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, char>> romanMap;

romanMap.push_back({1000, 'M'});
romanMap.push_back({900, 'CM'});
romanMap.push_back({500, 'D'});
romanMap.push_back({400, 'CD'});
romanMap.push_back({100, 'C'});
romanMap.push_back({90, 'XC'});
romanMap.push_back({50, 'L'});
romanMap.push_back({40, 'XL'});
romanMap.emplace_back(1, 'I');

string int_to_roman(int number) {
    string roman = "";
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    if (number > 0) {
        roman += 'I';
    } else if (number < 0) {
        roman = "-" + roman;
    }
    return roman;
}

int main() {
    for(int i = 1; i <= 3999; i++) { 
        cout << i << ": " << int_to_roman(i) << endl;
    }
    return 0;
}