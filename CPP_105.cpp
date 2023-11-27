#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numToString = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    
    // Sort the integers between 1 and 9 inclusive
    sort(arr.begin(), arr.end());
    
    // Reverse the resulting vector
    reverse(arr.begin(), arr.end());
    
    // Replace each digit by its corresponding name from "One" to "Nine"
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            result.push_back(numToString[arr[i]]);
        }
    }
    
    return result;
}