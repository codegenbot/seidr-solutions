#include <vector>
#include <algorithm>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = min(a, b); i <= max(a, b); i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}