#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int temp = num / 3;
        if (temp >= 1)
            temp--;
        temp -= 2;
        total += temp;
    }
    return total;
}

int main() {
    vector<int> inputs; // Read input from user and store it in the vector
    // Add your code here to read the input from user
    
    int result = calculateFuelCost(inputs);
    
    cout << "Output: " << result << endl;
    
    return 0;
}