#include <iostream>
#include <vector>
#include <cassert>

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

vector<int> inputVector() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    vector<int> userVec(n);

    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> userVec[i];
    }
    return userVec;
}

int main() {
    vector<int> testVec = {3, 13, 2, 9};
    assert(solutions(testVec) == 3);

    vector<int> userVec = inputVector();
    cout << "The sum is: " << solutions(userVec) << endl;
    
    return 0;
}