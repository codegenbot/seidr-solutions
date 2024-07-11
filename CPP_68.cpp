#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if (arr.empty()) return {{}};

    vector<int>::iterator it = min_element(arr.begin(), arr.end(), [](int a, int b){
        if(a%2!=b%2) return a<b;
        return a>b;
    });

    int smallestValue = *it;
    int index = distance(arr.begin(), it);

    result.push_back({smallestValue, index});

    return result;
}