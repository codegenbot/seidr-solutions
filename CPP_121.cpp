```cpp
#include <iostream>
#include <vector>

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for(int i = 0; i < lst.size(); i++) {
        if(i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;

}

int main() {
    vector<int> input;
    cout << "Enter the numbers separated by space: ";
    int num;
    while (cin >> num) {
        input.push_back(num);
        if (cin.peek() != ' ') {
            break;
        }
    }
    assert(solutions(input) == 3);
}