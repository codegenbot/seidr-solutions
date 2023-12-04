```
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
vector<float> get_positive(vector<float> l){
    vector<float> positive_numbers;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            positive_numbers.push_back(l[i]);
        }
    }
    return positive_numbers;
}
```