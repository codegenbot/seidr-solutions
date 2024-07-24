#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> testCases;
    cout << "Enter the numbers separated by space: ";
    int num;
    while (cin >> num) {
        testCases.push_back(num);
    }
    
    if (testCases.size() < 1) {
        cerr << "Error: No input provided." << endl;
        return 1;
    }

    cout << "Sum of odd numbers at even positions is: " << solution(testCases) << endl;

    return 0;
}