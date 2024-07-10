#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    int rightmost = arr[n-1];
    leaders.push_back(rightmost);

    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= rightmost) {
            rightmost = arr[i];
            leaders.push_back(rightmost);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}