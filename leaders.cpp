using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        int maxRight = arr[i];
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= maxRight) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) res.push_back(maxRight);
    }
    
    return res;
}