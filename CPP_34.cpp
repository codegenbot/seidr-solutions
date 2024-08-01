```c
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), std::unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}