#include <vector>
using namespace std;

vector<int> maximum(vector<int> arr,int k){
    if(k > arr.size()) {
        cout << "Error: k is greater than array size." << endl;
        return {};
    }
    vector<int> result(arr.begin(),arr.begin()+k);
    sort(result.begin(),result.end());
    return result;
}