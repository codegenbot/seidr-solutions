#include <algorithm>

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;

    int sum = array[0] + array.back();
    bool isOdd = (sum % 2 != 0);

    vector<int> result = array;
    std::sort(result.begin(), result.end(), [isOdd](int a, int b) {
        if (isOdd) return a < b;
        else return a > b;
    });

    return result;
}