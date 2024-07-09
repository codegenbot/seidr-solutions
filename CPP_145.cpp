#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to order points by their values
vector<int> order_by_points(vector<int> points) {
    sort(points.begin(), points.end());
    return points;
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
    
    vector<int> ordered_points = order_by_points(points);
    
    return 0;
}