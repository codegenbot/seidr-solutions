#include <string>
#include <map>

using namespace std;

map<int, string> roman_map = {{1000, "M"}, {900, "CM"}, {500, "D"}, 
                               {400, "CD"}, {100, "C"}, {90, "XC"},
                               {50, "L"}, {40, "XL"}, {10, "X"},
                               {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

string int_to_mini_roman(int n) {
    string roman;
    for (auto p : roman_map | map_view<less<int>>()) {
        while (n >= p.first) {
            roman += p.second;
            n -= p.first;
        }
    }
    return roman;
}

int main() {
    std::string roman = int_to_mini_roman(1000);
    // ...
}