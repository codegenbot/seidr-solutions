#include <vector>
using namespace std;

vector<int> maximum(vector<int> arr,int k){
    if(k > arr.size()) {
        return vector<int>();
    }
    vector<int> result(arr.begin(),arr.begin()+k);
    sort(result.begin(),result.end());
    return result;
}