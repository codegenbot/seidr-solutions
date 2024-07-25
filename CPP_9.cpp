#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a.size() == b.size() && a==b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = INT_MIN;

    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }

    return result;
}