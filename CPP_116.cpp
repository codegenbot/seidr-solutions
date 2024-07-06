#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<int> arrCopy = arr;  
    sort(arrCopy.begin(), arrCopy.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);

        if (countA == countB)
            return a < b;
        else
            return countA < countB;
    });
    return arrCopy;  
}