#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate total number of eaten carrots after your meals
    int total = number + (remaining >= need ? need : remaining);
    
    // Calculate the number of carrots left after your meals
    int left = max(0, remaining - need + number);
    
    result.push_back(total);
    result.push_back(left);
    
    return result;
}

int main() {
    vector<int> res = eat(5, 6, 10);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 11 4
    
    res = eat(4, 8, 9);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 12 1
    
    res = eat(1, 10, 10);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 11 0
    
    res = eat(2, 11, 5);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 7 0
    return 0;
}