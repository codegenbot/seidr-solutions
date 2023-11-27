#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> generate_integers(int start, int end)
{
    vector<int> result;
    for (int i = start; i <= end; i++) {
        result.push_back(i);
    }
    return result;
}