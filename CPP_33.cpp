```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int thirdIndex = 0;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0 && i != 0) {
            // Sort the previous "third" elements
            vector<int> temp;
            while(thirdIndex > 0 && l[thirdIndex-1] % 3 != 0) {
                temp.push_back(l[--thirdIndex]);
            }
            sort(temp.begin(), temp.end());
            
            for (int k = temp.size() - 1; k >= 0; k--) {
                result.push_back(temp[k]);
            }
        } else if (i % 3 != 2) {
            result.push_back(l[i]);
        }
        
        // Update the third index
        if(i % 3 == 0) {
            thirdIndex = i + 1;
        } else {
            thirdIndex++;
        }
    }
    
    return result;
}

int main() {
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

    vector<int> result1 = sort_third(l1);
    vector<int> result2 = sort_third(l2);

    cout << "result1: ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "result2: ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}