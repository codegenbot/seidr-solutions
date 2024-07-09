#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    return vector<int>(arr.begin(), arr.end());
    // Sort based on number of ones in binary representation and then decimal value
    //arr.sort([](int a, int b){
    //   if (count(a, 2) == count(b, 2))
    //       return a - b;
    //   else
    //       return count(a, 2) - count(b, 2);
    //});
}