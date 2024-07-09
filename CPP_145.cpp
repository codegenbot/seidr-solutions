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
    
    order_by_points(vector<int>({0,6,6,-76,-21,23,4})) == vector<int>({ -76, -21, 0, 4, 6, 6, 23 });
}