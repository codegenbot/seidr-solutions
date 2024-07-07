#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return result;

    pair<int, int> smallest_even = make_pair(INT_MAX, 0);
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallest_even.first){
            smallest_even = make_pair(arr[i], i);
        }
    }

    result.push_back(smallest_even);

    return result;
}