using namespace std;
int leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || arr[i] >= arr[i + 1])
            result.push_back(arr[i]);
    }
    return result.size() ? result[0] : -1;
}