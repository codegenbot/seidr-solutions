#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int total = 0;
    for (int i : v) {
        total += (i / 3) - 2; 
    }
    return total;
}

int main() {
    vector<int> inputs;
    int input;
    cout << "Enter the number of inputs: ";
    cin >> input;
    for(int i = 0; i < input; i++) {
        cout << "Enter a positive integer: ";
        cin >> input;
        inputs.push_back(input);
    }
    
    cout << "The total fuel cost is: " << fuelCost(inputs) << endl;
    
    return 0;
}