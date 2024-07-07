#include <vector>
using namespace std;

vector<int> maximum(vector<int> arr,int k){
    if(k > arr.size()){
        vector<int> result = {"Error: k is greater than the size of array"};
        return result;
    }
    vector<int> result(arr.begin(),arr.begin()+k);
    sort(result.begin(),result.end());
    return result;
}