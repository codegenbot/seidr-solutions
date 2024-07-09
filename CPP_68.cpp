#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) return result;
    
    int minEvenIndex = -1;
    int minEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenIndex = i;
        }
    }

    if (minEvenIndex != -1) {
        result.push_back({minEvenValue, minEvenIndex});
    }

    return result;
}

int main() {
    vector<int> input;
    int num;

    while (cin >> num) {
        input.push_back(num);
    }

    auto output = pluck(input);

    for (const auto& pair : output) {
        cout << "Minimum even value: " << pair.first 
             << ", Index: " << pair.second << endl;   
    }
    
    return 0;
}