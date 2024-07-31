```
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

vector<int> l1 = {1, 2, 3};
vector<int> l2 = {5, 6, 3, 4, 8, 9, 2};

cout << "l1: ";
for (int i : l1) {
    cout << i << " ";
}
cout << endl;

cout << "l2: ";
for (int i : l2) {
    cout << i << " ";
}
cout << endl;

vector<int> result = sort_third(l1);
vector<int> result2 = sort_third(l2);

cout << "result1: ";
for (int i : result) {
    cout << i << " ";
}
cout << endl;

cout << "result2: ";
for (int i : result2) {
    cout << i << " ";
}
cout << endl;