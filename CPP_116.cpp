#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

int main(){
    vector<int> arr;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    vector<int> sorted_arr = sort_array(arr);
    
    if (sorted_arr == vector<int>{2, 4, 8, 16, 32}) {
        return 0;
    } else {
        return 1;
    }
}