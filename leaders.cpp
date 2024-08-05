#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int max_right = arr.back();
    leaders.push_back(max_right);

    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            leaders.push_back(max_right);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}