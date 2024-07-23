#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if ((i % 2 == 0 && lst[i] % 2 != 0) || (i % 2 != 0 && lst[i] % 2 == 0)) {
            sum += lst[i];
        }
    }
    return sum;
}

int userInput() {
    int n, num;
    vector<int> lst;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        lst.push_back(num);
    }
    return solutions(lst);
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 3);
    int result = userInput();
    cout << "The sum of the desired elements is: " << result << endl;
    return 0;
}