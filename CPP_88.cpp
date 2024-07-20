#include <algorithm>
using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size()-1];
    if (sum % 2 == 0) {
        sort(array.begin(), array.end());
    } else {
        sort(array.begin(), array.end(), greater<int>());
    }
    return array;
}