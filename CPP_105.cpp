```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> output;
    map<int, int> lengthCount;
    for (int num : arr) {
        string str = to_string(num);
        lengthCount[str.length()]++;
    }

    for (auto it = lengthCount.rbegin(); it != lengthCount.rend(); ++it) {
        while (it->second > 0) {
            for(int i=1; i<=9; i++) {
                if(to_string(i).length() == it->first) {
                    output.push_back((i==1?"One":(i==2?"Two":(i==3?"Three):(i==4?"Four":"Five"))));
                    it->second--;
                    if(it->second == 0) break;
                }
            }
        }
    }

    return output;
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int num;
        cout << "Enter integer " << i+1 << ": ";
        cin >> num;
        arr.push_back(num);
    }
    vector<string> output = by_length(arr);
    cout << "The numbers in the order of their lengths are: ";
    for (string str : output) {
        cout << str << " ";
    }
    cout << "\n";
}