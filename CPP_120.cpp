#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int mainProblemCPP120() {
    vector<int> vec1; 
    for(int i=0; i<3; i++) {
        vec1.push_back(i+1);
    }
    vector<int> vec2(3); 
    iota(vec2.begin(), vec2.end(), 1);
    
    if (issame(vec1, vec2)) { // Compare vectors
        cout << "Vectors are same" << endl;
    } else {
        int max = *max_element({1, 2, 3, -23, 243, -400, 0});
        cout << "Maximum element in the vector is: " << max << endl;
    }
    
    return 0;
}