#include <iostream>
#include <vector>

using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (result > 0 ? result - 1 : 0); 
        sum += result; 
    }
    return sum;
}

int main() {
    vector<vector<int>> testCases = {{1}, {6}, {1, 7}, {1, 8}, {1, 9}, {1, 10}};
    for (const auto& testCase : testCases) {
        cout << "Input: ";
        for (int num : testCase) {
            cout << num << " ";
        }
        cout << endl;
        cout << "Output: " << fuelCost(testCase) << endl;
    }
    return 0;
}