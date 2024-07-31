```
#include <algorithm>

float median(vector<float> my_l) {
    sort(my_l.begin(), my_l.end());
    int n = my_l.size();
    if (n % 2 == 0)
        return (my_l[n/2 - 1] + my_l[n/2]) / 2.0;
    else
        return my_l[n/2];
}