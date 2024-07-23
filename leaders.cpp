#include <vector>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    leaders.push_back(rightmost);
    
    for(int i = arr.size() - 2; i >= 0; i--) {
        if(arr[i] >= rightmost) {
            rightmost = arr[i];
            leaders.push_back(rightmost);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}