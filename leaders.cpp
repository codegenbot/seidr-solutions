#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int lastLeader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= lastLeader) {
            lastLeader = arr[i];
            result.push_back(lastLeader);
        }
    }
    return result;
}

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> leadersArr = leaders(v);
    for (int leader : leadersArr) {
        cout << leader << " ";
    }
    return 0;
}