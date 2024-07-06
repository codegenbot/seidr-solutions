#include <bits/stdc++.h>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int num : arr) {
        pq.push(num);
    }
    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;
}