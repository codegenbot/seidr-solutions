#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr){
    auto compare = [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    };

    sort(arr.begin(), arr.end(), compare);

    return arr;
}