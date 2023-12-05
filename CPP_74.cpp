```
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < lst1.size(); i++) {
        cnt1 += lst1[i].length();
    }
    for (int i = 0; i < lst2.size(); i++) {
        cnt2 += lst2[i].length();
    }
    if (cnt1 > cnt2) {
        return lst1;
    } else if (cnt1 < cnt2) {
        return lst2;
    } else {
        return lst1;
    }
}
```