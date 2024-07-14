#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return {};

    int leader = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > leader) leader = arr[i];
    }
    vector<int> res;
    res.push_back(leader);
    return res;
}

int main() {
    vector<int> result(5, 0);
    for (int i : {16, 17, 4, 3, 5}) {
        result[4] = i;
    }
    for(int x : leaders(result)) {
        cout << x << " ";
    }
}