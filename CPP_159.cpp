#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate total number of eaten carrots after your meals
    int total = number + (remaining >= need ? need : remaining);
    
    // Calculate the number of carrots left after your meals
    int leftover = max(0, remaining - need);
    
    result.push_back(total);
    result.push_back(leftover);
    
    return result;
}

int main() {
    cout << "{ " << eat(5, 6, 10).at(0) << ", " << eat(5, 6, 10).at(1) << " }" << endl; 
    cout << "{ " << eat(4, 8, 9).at(0) << ", " << eat(4, 8, 9).at(1) << " }" << endl; 
    cout << "{ " << eat(1, 10, 10).at(0) << ", " << eat(1, 10, 10).at(1) << " }" << endl; 
    cout << "{ " << eat(2, 11, 5).at(0) << ", " << eat(2, 11, 5).at(1) << " }" << endl; 
    return 0;
}