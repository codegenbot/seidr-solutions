#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b);

void order_by_points(vector<int>& points) {
    sort(points.begin(), points.end());
}

bool issame(vector<int> a, vector<int> b){
    order_by_points(a);
    return a == b;
}

int main(){
    cout << issame({0,6,6,-76,-21,23,4}, {-76, -21, 0, 4, 23, 6, 6}) << endl;
    return 0;
}