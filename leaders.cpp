using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    int leader = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= leader){
            leader = arr[i];
        }
    }
    for(int i=n-1; i>=0; --i){
        if(arr[i] == leader) res.push_back(arr[i]);
    }

    return res;
}