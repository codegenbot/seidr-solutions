#include <vector>
using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> even_odd_count(int n) {
    return {n, n % 2};
}