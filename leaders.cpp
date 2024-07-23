using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    return result;
}