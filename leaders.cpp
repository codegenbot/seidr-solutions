#include <vector>
using namespace std;

int main() {
    vector<int> leaders(vector<int>& arr) {
        vector<int> result;
        int n = arr.size();
        int maxRight = arr[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= maxRight) {
                result.push_back(arr[i]);
                maxRight = arr[i];
            }
        }
        return result;
    }
    vector<int> a;
    leaders(a);
    return 0;
}