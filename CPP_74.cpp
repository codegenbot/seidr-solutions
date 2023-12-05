```
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalCharsLst1 = 0, totalCharsLst2 = 0;
    for (int i = 0; i < lst1.size(); i++) {
        totalCharsLst1 += lst1[i].length();
    }
    for (int i = 0; i < lst2.size(); i++) {
        totalCharsLst2 += lst2[i].length();
    }
    if (totalCharsLst1 < totalCharsLst2) {
        return lst1;
    } else if (totalCharsLst1 > totalCharsLst2) {
        return lst2;
    } else {
        return lst1;
    }
}
```