#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int i = 0; 

    while (i < l.size()) {
        if (i + 2 < l.size()) { 
            vector<int> block;
            for (int j = 0; j <= 2 && i + j < l.size(); j++) {
                block.push_back(l[i + j]);
            }
            sort(block.begin(), block.end());
            while (!block.empty()) {
                result.push_back(block.back());
                block.pop_back();
            }
            i += 3;
        } else {
            if (i < l.size() - 1) {
                result.push_back(l[i]);
            }
            i++;
        }
    }
    return result;
}