```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a vector to hold the numbers
    vector<int> numbers;

    // Read the input string and split it into individual numbers
    istringstream iss("six five four three two one zero");
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    // Sort the vector of integers using the sort function
    sort(numbers.begin(), numbers.end());

    // Print the sorted vector as a string
    string output = "";
    for (int i = 0; i < numbers.size(); i++) {
        output += to_string(numbers[i]) + " ";
    }
    cout << output << endl;

    return 0;
}
```