#include <algorithm>
#include <vector>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(binary(a).begin(), binary(a).end(), '1') != count(binary(b).begin(), binary(b).end(), '1')) {
            return count(binary(a).begin(), binary(a).end(), '1') < count(binary(b).begin(), binary(b).end(), '1');
        } else {
            return a < b;
        }
    });
    return arr;
}