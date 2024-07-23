#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l);
    sort(unique_erase(result.begin(), result.end()));
    return result;
}