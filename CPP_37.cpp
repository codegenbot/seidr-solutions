#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l[i]);
        } else {
            float temp = l[i];
            int j = i - 1;
            while (j >= 0 && l[j] > temp) {
                l[j + 1] = l[j];
                j--;
            }
            l[j + 1] = temp;
        }
    }
    return result;
}