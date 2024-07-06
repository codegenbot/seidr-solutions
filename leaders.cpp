#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> input = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> leaders(input);
    cout << "The leaders are: ";
    for (int i : leaders) {
        if (i == input.size() - 1)
            cout << i << endl;
        else
            cout << i << ", ";
    }
}