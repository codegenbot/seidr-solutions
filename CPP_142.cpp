```
#include <vector>
#include <cmath>
using namespace std;

int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0)
            total += pow(lst[i], 2);
        else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0)
            total += pow(lst[i], 3);
    }
    return total;

int main() {
    vector<int> test1 = {1, 2, 3, 4, 5};
    cout << "Test 1: " << sum_squares(test1) << endl;
    
    vector<int> test2 = {6, 7, 8, 9, 10};
    cout << "Test 2: " << sum_squares(test2) << endl;

    return 0;
}