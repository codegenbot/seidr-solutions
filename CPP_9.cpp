#include <iostream>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxSoFar = numbers[0];
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > maxSoFar) {
            maxSoFar = numbers[i];
        }
        result.push_back(maxSoFar);
    }
    
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 3, 4, 2};
    vector<int> output = rolling_max(numbers);
    
    for (int i : output) {
        cout << i << " ";
    }
    
    return 0;
}