
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {3, 1, 5};
    for (int i = 0; i < numbers.size(); i++) {
        string num_str = to_string(numbers[i]);
        int num = stoi(num_str);
        // Do something with num
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}