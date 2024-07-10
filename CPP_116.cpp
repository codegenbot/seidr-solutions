#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b) {
        if (count(binary(a).begin(), binary(a).end(), '1') != count(binary(b).begin(), binary(b).end(), '1')) {
            return count(binary(a).begin(), binary(a).end(), '1') < count(binary(b).begin(), binary(b).end(), '1');
        } else {
            return a < b;
        }
    });
    return result;
}