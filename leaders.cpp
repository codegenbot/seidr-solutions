#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    for (int i = arr.size() - 1; i >= 0; --i) {
        bool isLeader = true;
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}