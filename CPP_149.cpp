#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if two vectors are same
bool issame(vector<string> a,vector<string>b) {
    return a == b;
}

// Function to sort the list and calculate its sum
vector<string> sorted_list_sum(vector<string> lst) {
    // Sort the list in ascending order based on their lengths
    sort(lst.begin(), lst.end(), [](string a, string b) { 
        return a.length() < b.length(); 
    });
    
    return lst;
}