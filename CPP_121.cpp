```cpp
#include <vector>
#include <cassert>
#include <iostream>

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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    assert(solutions(input) == 3);

}