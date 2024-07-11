#include <vector>
#include <initializer_list>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    for (int i = 0; i < arr.size(); i++) {
        bool leader = true;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(arr[i]);
    }
    return res;