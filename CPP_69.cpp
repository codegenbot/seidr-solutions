#include <iostream>
using namespace std;

int findMaxFreq(int arr[], int n) {
    map<int, int> freqMap;
    for (int i = 0; i < n; i++) {
        if (freqMap.find(arr[i]) == freqMap.end()) {
            freqMap[arr[i]] = 1;
        } else {
            freqMap[arr[i]]++;
        }
    }

    int maxFreqNum = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second > 0 && it->first == it->second) {
            maxFreqNum = it->first;
            break;
        }
    }

    return maxFreqNum;
}

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxFreq = findMaxFreq(arr, n);

    if(maxFreq != -1)
        cout << "The number with maximum frequency is: " << maxFreq;
    else
        cout << "No number has a frequency greater than its value";

    return 0;
}