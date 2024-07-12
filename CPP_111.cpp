#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int driver() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    string str;
    cin >> str;
    
    int result = histogram(str, arr);
    cout << result << endl;
    
    return 0;

}

int histogram(string s, vector<int>& arr) {
    if (s == "print") {
        int max_val = *max_element(arr.begin(), arr.end());
        int min_val = *min_element(arr.begin(), arr.end());
        
        for (int i = min_val; i <= max_val; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == i) {
                    count++;
                }
            }
            cout << count << " ";
        }
    } else {
        return -1;
    }
}