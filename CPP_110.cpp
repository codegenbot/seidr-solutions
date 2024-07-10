```cpp
#include <vector>
#include <algorithm>
using namespace std;

std::string exchange(vector<int> lst1, vector<int> lst2) {
    bool foundOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            foundOdd = true;
            break;
        }
    }
    if (!foundOdd) return "YES";
    for (int i = 0; i < lst1.size(); i++) {
        for (int j = 0; j < lst2.size(); j++) {
            if (lst1[i] % 2 != 0 && lst2[j] % 2 == 0) {
                swap(lst1[i], lst2[j]);
                foundOdd = false;
                break;
            }
        }
    }
    return foundOdd ? "NO" : "YES";
}