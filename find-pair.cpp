#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
int main() {
	vector<int> nums;
	int target;
	cin >> target;
	while (cin >> nums) {
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					cout << nums[i] << " " << nums[j] << endl;
				}
			}
		}
	}
	return 0;
}