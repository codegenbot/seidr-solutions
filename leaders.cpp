#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    leaders.push_back(rightmost);
    return leaders;
}

int main() {
    vector<int> arr = {17, 110, 2, 83, 55};
    vector<int> leaders = leaders(arr);
    // Do something with the leaders vector
    for(int i=0;i<leaders.size();i++){
        cout<<leaders[i]<<" ";
    }
    return 0;
}