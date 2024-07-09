#include <iostream>
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            result.push_back(i + 1);
        else
            result.push_back(2 * i - 1);
    }
    return result;
}