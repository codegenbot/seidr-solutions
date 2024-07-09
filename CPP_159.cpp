#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate the total number of carrots eaten after your meals
    int total = number + (remaining >= need ? need - remaining : need);
    
    // Calculate the number of carrots left after your meals
    int left = max(0, min(total, 1000) - need);
    
    result.push_back(total);
    result.push_back(left);
    
    return result;
}

int main() {
    cout << "{ " << eat(5, 6, 10).at(0) << ", " << eat(5, 6, 10).at(1) << " }";
    cout << endl;
    cout << "{ " << eat(4, 8, 9).at(0) << ", " << eat(4, 8, 9).at(1) << " }";
    cout << endl;
    cout << "{ " << eat(1, 10, 10).at(0) << ", " << eat(1, 10, 10).at(1) << " }";
    cout << endl;
    cout << "{ " << eat(2, 11, 5).at(0) << ", " << eat(2, 11, 5).at(1) << " }";
    return 0;
}