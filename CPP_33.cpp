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
            int k = i;
            for (int j = 0; j < temp.size(); j++) {
                l[k] = temp[j];
                k += 3;
            }
        }
    }
    return l;
}