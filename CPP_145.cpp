#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> order_by_points(vector<int> points){
    sort(points.begin(), points.end());
    return points;
}