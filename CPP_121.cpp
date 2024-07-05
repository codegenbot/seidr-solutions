#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 3);

    vector<int> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        lst.push_back(elem);
    }

    cout << "Sum: " << solutions(lst) << endl;

    return 0;
}