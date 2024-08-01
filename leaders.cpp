#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr[arr.size() - 1];
    for (int i = 0; i < arr.size(); ++i) {
        if (i == arr.size() - 1 || arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    return 0;
}