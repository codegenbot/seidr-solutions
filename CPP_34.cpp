#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int x : l) {
        if (find(result.begin(), result.end(), x) == result.end())
            result.push_back(x);
    }
    return result;
}