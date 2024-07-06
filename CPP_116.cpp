#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end());
    return result;
}