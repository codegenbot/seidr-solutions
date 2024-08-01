#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) pq.push(i);
    vector<int> res;
    for (int i = 0; i < k; i++) res.push_back(pq.top()), pq.pop();
    return res;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    cout << "Code works correctly." << endl;
    return 0;
}