#include <iostream>
#include <vector>
#include <map>

int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int result = -1;
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > 0) {
            result = pair.first;
            break;
        }
    }
    return result;
}

int main() {
    vector<int> lst;
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        lst.push_back(num);
    }
    
    cout << search(lst) << endl;

    return 0;
}