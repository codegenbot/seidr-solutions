#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++)
                temp.push_back(l[j]);
            sort(temp.begin(), temp.end());
            for (int k = i, x = 0; k < l.size() && k % 3 == 0; k++, x++) {
                l[k] = temp[x];
            }
        }
    }
    return l;
}