#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 100000) % 2 != 0 || (num / 10000) % 2 != 0 || (num / 1000) % 2 != 0 || (num / 100) % 2 != 0 || (num / 10) % 2 != 0 || num % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> input;
    int num;
    while(cin >> num) {
        input.push_back(num);
    }
    cout << specialFilter(input) << endl;
}