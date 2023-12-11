
/*
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
*/

// Complete the code
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    
    // Find the leader in the given array
    int leader = arr[arr.size() - 1];
    
    // Iterate through the array from right to left
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] > leader) {
            result.push_back(leader);
            leader = arr[i];
        }
    }
    
    // Add the last element as a leader
    result.push_back(leader);
    
    return result;
}