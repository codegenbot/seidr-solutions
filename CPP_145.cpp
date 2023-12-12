#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <utility>
using namespace std;

// Declare and define the sort function
void sort(const vector<pair<int, int>>& points) {
    // Sort the points in ascending order of their first element
    sort(points);
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> points;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        while (nums[i] > 0) {
            sum += nums[i] % 10;
            nums[i] /= 10;
        }
        points.push_back(make_pair(sum, i));
    }
    sort(points); // Use the declared and defined sort function
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        result.push_back(nums[points[i].second]);
    }
    return result;
}