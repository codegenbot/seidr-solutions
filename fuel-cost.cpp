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
    size_t pos = 0;
    while ((pos = str.find(" ")) != string::npos) {
        int num = stoi(str.substr(0, pos));
        nums.push_back(num);
        str.erase(0, pos + 1);
    }
    if (!str.empty()) {
        int num = stoi(str);
        nums.push_back(num);
    }
    cout << "The fuel cost is: " << fuelCost(nums) << endl;
    return 0;
}