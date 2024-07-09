#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to order points by their values
vector<int> order_by_points(vector<int> points) {
    sort(points.begin(), points.end());
    return points;
}

// Function to check if two vectors are same
bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> points;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        points.push_back(x);
    }
    
    assert(issame(order_by_points(points), vector<int>({ -76, -21, 0, 4, 6, 6, 23 })));
}