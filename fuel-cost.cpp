```
#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3 - 2);
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> nums;
    cout << "Enter numbers separated by space: ";
    string str;
    getline(cin, str);
    for (const auto& s : split(str, ' ')) {
        nums.push_back(stoi(s));
    }
    cout << "Fuel cost is: " << fuelCost(nums) << endl;
    return 0;
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}