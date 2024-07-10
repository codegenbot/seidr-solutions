using namespace std;

struct RomanPair {
    int first;
    string second;
};

using Pair = pair<int, string>;
vector<Pair> romanMap = {{1000, "M"}, {900, "CM"}, {500, "D"},
                          {400, "CD"}, {100, "C"}, {90, "XC"},
                          {50, "L"}, {40, "XL"}, {10, "X"},
                          {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

string int_to_mini_roman(int number) {
    string roman = "";
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The Roman numeral for " << num << " is " << int_to_mini_roman(num) << endl;
    return 0;