```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0 && oddCount > 0) {
            lst1.push_back(lst2[i]);
            lst2.erase(lst2.begin() + i);
            i--;
            oddCount--;
        }
    }
    return std::to_string(oddCount == 0 ? 1 : 0);
}

int main() {
    vector<int> lst1 = {1, 3, 5};
    vector<int> lst2 = {4, 6, 8, 10};
    string result = exchange(lst1, lst2);
    cout << "The output is: " << result << endl;
    return 0;
}