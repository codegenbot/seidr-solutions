#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), end(unique(l.begin(), l.end())));
    sort(result.begin(), result.end());
    return result;
}

int main() {
    // removed the function call, since this is not a correct way to use the function
}