#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    if (number + need > remaining) {
        result.push_back(number + remaining);
        result.push_back(0);
    } else {
        result.push_back(number + need);
        result.push_back(remaining - need);
    }
    
    return result;
}

int main() {
    int number, need, remaining;
    cout << "Enter the number of carrots you have eaten: ";
    cin >> number;
    cout << "Enter the number of carrots you need to eat: ";
    cin >> need;
    cout << "Enter the number of remaining carrots: ";
    cin >> remaining;
    
    vector<int> result = eat(number, need, remaining);
    
    cout << "Total number of eaten carrots after your meals: " << result[0] << endl;
    cout << "Number of carrots left after your meals: " << result[1] << endl;
    
    return 0;
}