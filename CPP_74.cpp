```
#include <vector>
#include <string>
using namespace std;

vector<string>& total_match(vector<string>& lst1, vector<string>& lst2) {
    int len1 = 0, len2 = 0;
    for (int i = 0; i < lst1.size(); i++) {
        len1 += lst1[i].length();
    }
    for (int i = 0; i < lst2.size(); i++) {
        len2 += lst2[i].length();
    }
    if (len1 < len2) {
        return lst1;
    } else if (len1 > len2) {
        return lst2;
    } else {
        return lst1;
    }
}
```