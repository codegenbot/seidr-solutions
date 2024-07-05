#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1;
        }
    }
    return -1;
}

int main() {
    vector<int> v;
    int targetSum = 0;

    // get input from the user
    cout << "Enter a series of integers separated by spaces: ";
    while (cin >> v[v.size()]) {}

    // call the basement function and print the result
    int index = basement(v);
    if (index == -1) {
        cout << "No negative sum found.\n";
    } else {
        cout << "The first index with a negative sum is " << index << endl;
    }

    return 0;
}