#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result = "";
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 != 0) {
            result.push_back(l[i]);
        } else {
            sort(l.begin() + i, l.end());
            result.insert(result.end(), l.begin() + i, l.end());
        }
    }
    return result;
}