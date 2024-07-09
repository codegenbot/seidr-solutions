#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int groupCount = 0;

    for (int i : l) {
        if(groupCount % 3 == 0) { 
            reverse(result.begin(), result.end());
            groupCount++;
        } else {
            result.push_back(i);
            groupCount++;
        }
    }

    if(groupCount % 3 != 0) {
        reverse(result.begin(), result.end());
    }

    return result;
}

int main() {
    vector<int> l1;
    int n;
    cout << "Enter the number of elements in l1: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l1.push_back(x);
    }

    vector<int> l2;
    cout << "Enter the number of elements in l2: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l2.push_back(x);
    }

    cout << "l1: ";
    for (int i : l1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "l2: ";
    for (int i : l2) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> result1 = sort_third(l1);
    vector<int> result2 = sort_third(l2);

    cout << "result1: ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "result2: ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}