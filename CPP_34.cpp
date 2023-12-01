#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> unique(vector<int> l){
    // Sort the vector
    sort(l.begin(), l.end());
    
    // Remove duplicates
    l.erase(unique(l.begin(), l.end()), l.end());
    
    return l;
}