#include <iostream>
#include <vector>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = (a > b ? b : a); i != (a < b ? b : a); i += (a < b) - (a > b)) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}