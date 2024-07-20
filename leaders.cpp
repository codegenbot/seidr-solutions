#include <vector>
using namespace std;

int main() {
    vector<int> leaders = leaders({1, 3, 4, 2});
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            result.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    result.push_back(rightmost);
    return result;
}