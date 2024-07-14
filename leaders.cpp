using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=0; i<n-1; i++) {
        if(res.empty() || arr[i] >= res.back()) {
            res.push_back(arr[i]);
        }
    }
    
    return res;
}