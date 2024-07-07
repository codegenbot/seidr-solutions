#include <iostream>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(max);
        max = max > numbers[i] ? max : numbers[i];
    }
    
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 3, 4, 2};
    vector<int> result = rolling_max(numbers);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}