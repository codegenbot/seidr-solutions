#include <iostream>
#include <vector>
#include <map>
using namespace std;

int search(vector<int> lst) {
    int max = 0;
    map<int, int> mp;
    for (int i : lst) {
        if (i > 0 && ++mp[i] >= i) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int problem69() {
    vector<int> lst; 
    for (int i = 0; i < 5; ++i) { 
        int temp; cin >> temp; lst.push_back(temp); 
    }
    int result = search(lst);
    cout << "The largest number in the list is: " << result << endl;
    return 0;
}