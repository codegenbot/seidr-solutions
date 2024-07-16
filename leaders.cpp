#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersResult = leaders(arr);
    cout << "Leaders: ";
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;

}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    leaders.push_back(arr[n-1]); // rightmost element is always a leader
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= arr[i+1]) 
            leaders.push_back(arr[i]);
    }
    reverse(leaders.begin(), leaders.end()); // reverse the vector to maintain the original order of elements
    return leaders;
}