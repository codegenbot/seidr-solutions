using namespace std;
int leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int leader = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            result.push_back(leader);
        }
    }
    reverse(result.begin(), result.end());
    return result.size();