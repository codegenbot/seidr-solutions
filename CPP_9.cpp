#include <iostream>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 3, 4, 2};
    vector<int> result = rolling_max(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}