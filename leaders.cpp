using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int leader = -1;

    for(int i = arr.size() - 1; i >= 0; --i) {
        if(arr[i] >= leader) {
            leader = arr[i];
            result.push_back(leader);
        }
    }

    reverse(result.begin(), result.end());
    
    return result;
}