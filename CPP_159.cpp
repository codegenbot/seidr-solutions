#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate total eaten carrots
    int totalEaten = number + (need - 1);
    if (totalEaten > remaining) {
        totalEaten = remaining;
    }
    
    // Calculate the number of carrots left after meals
    int carrotsLeft = remaining - totalEaten;
    
    result.push_back(totalEaten);
    result.push_back(carrotsLeft);
    
    return result;
}

int main() {
    int num, need, rem;
    cout << "Enter the number of eaten carrots: ";
    cin >> num;
    cout << "Enter the number of carrots needed to eat: ";
    cin >> need;
    cout << "Enter the remaining number of carrots: ";
    cin >> rem;
    
    vector<int> result = eat(num, need, rem);
    cout << "Total eaten carrots: " << result[0] << endl;
    cout << "Carrots left after meals: " << result[1] << endl;
    
    return 0;
}