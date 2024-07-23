#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int leader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            result.push_back(leader);
        }
    }
    return result;
}