#include <vector>
#include <iostream>

using namespace std;

int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) {
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) {
            total += lst[i] * lst[i] * lst[i];
        }
    }
    return total;
}

int main() {
    vector<int> lst;
    int num;
    
    cout << "Enter the number of elements in the list: ";
    cin >> num;
    
    lst.resize(num);
    
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> lst[i];
    }
    
    int result = sum_squares(lst);
    
    cout << "The sum of squares is: " << result << endl;
    
    return 0;
}