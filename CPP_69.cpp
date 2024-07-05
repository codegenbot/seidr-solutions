#include<stdio.h>
#include<vector>
#include<unordered_map>
using namespace std;

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    
    int result = -1;
    for (const auto& pair : freq) {
        if (pair.first <= pair.second) {
            result = max(result, pair.first);
        }
    }
    
    return result;
}