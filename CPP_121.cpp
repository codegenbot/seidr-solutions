#include <vector>
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
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    vector<int> lst(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
        cin >> lst[i];

    cout << "Sum of odd numbers at even indices: " << solutions(lst) << endl;
    return 0;
}