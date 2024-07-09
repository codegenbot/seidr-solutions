#include <vector>
#include <string>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    bool hasOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            hasOdd = true;
            break;
        }
    }
    if (!hasOdd) return "YES";
    
    for (int i = 0; i < lst2.size(); i++) {
        int odd = -1;
        for (int j = 0; j < lst1.size(); j++) {
            if (lst1[j] % 2 != 0) {
                odd = j;
                break;
            }
        }
        if (odd >= 0) {
            swap(lst1[odd], lst2[i]);
            for (int k = 0; k < lst1.size(); k++) {
                if (lst1[k] % 2 != 0) {
                    return "YES";
                }
            }
        }
    }
    return "NO";
}