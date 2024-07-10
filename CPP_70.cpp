#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> lst;
    int num;
    
    cout << "Enter numbers (0 to stop): ";
    while (cin >> num) {
        if (num == 0) break;
        lst.push_back(num);
    }
    
    vector<int> sorted_lst = strange_sort_vector(lst);
    
    cout << "Sorted list: ";
    for (int i : sorted_lst) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}