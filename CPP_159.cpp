#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate total eaten carrots
    int totalEaten = number + (need - remaining);
    
    // Calculate remaining carrots
    int leftCarrots = max(0, min(totalEaten, need));
    
    result.push_back(totalEaten);
    result.push_back(leftCarrots);
    
    return result;
}

int main() {
    vector<int> res1 = eat(5, 6, 10);
    cout << "Result for eat(5, 6, 10): ";
    for (int i : res1) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> res2 = eat(4, 8, 9);
    cout << "Result for eat(4, 8, 9): ";
    for (int i : res2) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> res3 = eat(1, 10, 10);
    cout << "Result for eat(1, 10, 10): ";
    for (int i : res3) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> res4 = eat(2, 11, 5);
    cout << "Result for eat(2, 11, 5): ";
    for (int i : res4) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}