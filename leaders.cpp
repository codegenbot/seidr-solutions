#include<iostream>
#include <vector>
using namespace std;

// function to find leaders in a vector
vector<int> leaders(vector<int>& nums) {
	vector<int> leaders;
	int leader = INT_MIN;

	for (int i = 0; i < nums.size(); i++) {
        // compare each element with the current leader
		if (nums[i] >= leader) {
            // if the element is greater or equal to the leader, update the leader and add it to the leaders vector
			leader = nums[i];
			leaders.push_back(leader);
		}
	}
	return leaders;
}