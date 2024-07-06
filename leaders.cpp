
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> input = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> leaders(input);
    
    for (int i = 0; i < input.size(); i++) {
        if (i == input.size() - 1) {
            leaders.push_back(input[i]);
        } else {
            int j = i + 1;
            while (j < input.size() && input[i] >= input[j]) {
                j++;
            }
            if (j == input.size()) {
                leaders.push_back(input[i]);
            }
        }
    }
    
    cout << "The leaders are: ";
    for (int i : leaders) {
        if (i == input.size() - 1)
            cout << i << endl;
        else
            cout << i << ", ";
    }
}