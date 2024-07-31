#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int i = 0; 

    for (i = 0; i < l.size(); ) {
        if ((i + 1) % 3 == 0 && !result.empty()) { 
            sort(result.begin(), result.end());
            result.clear(); 
        }
        
        if (!result.empty() || i % 3 != 0) {
            result.push_back(l[i]);
        }
        i++;
    }
    
    // add one last time just in case
    if (!result.empty()) {
        sort(result.begin(), result.end());
    }

    return result;
}