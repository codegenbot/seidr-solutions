#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;

}

int main() {
    vector<int> lst;
    int n, temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        lst.push_back(temp);
    }
    cout << "The next smallest number is: " << findSmallest(lst) << endl;
    return 0;
}