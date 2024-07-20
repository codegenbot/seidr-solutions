#include <vector>
using namespace std;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Werror"
#include <initializer_list>
#pragma GCC diagnostic pop

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    return leaders;
}