#include <vector>
#include <algorithm>
#include <iostream>
#include <initializer_list>

using namespace std;

vector<int> strange_sort_vector(initializer_list<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> temp(lst);
    sort(temp.begin(), temp.end());
    while (!temp.empty()) {
        result.push_back(*temp.begin());
        temp.erase(temp.begin());
        if (!temp.empty())
            sort(temp.begin(), temp.end());
    }

    return result;
}

int main() {
    int numElements;
    cout << "Enter the number of elements in the list: ";
    cin >> numElements;

    vector<int> input(numElements);
    for (int i = 0; i < numElements; i++) {
        int n;
        cout << "Enter element " << i + 1 << ": ";
        cin >> n;
        input[i] = n;
    }

    vector<int> output = strange_sort_vector(input);

    cout << "The sorted list is: ";
    for (int x : output) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}