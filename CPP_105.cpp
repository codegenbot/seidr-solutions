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
        if (str.length() >= 1 && str.length() <= 9) {
            str = (str == "1") ? "One" : ((str == "2") ? "Two" : ((str == "3") ? "Three" : ((str == "4") ? "Four" : ((str == "5") ? "Five" : ((str == "6") ? "Six" : ((str == "7") ? "Seven" : ((str == "8") ? "Eight" : "Nine")))))));
        }
        int len = str.length();
        if (lengthCount.find(len) != lengthCount.end()) {
            lengthCount[len]++;
        } else {
            lengthCount[len] = 1;
        }
    }

    for (auto it = lengthCount.rbegin(); it != lengthCount.rend(); ++it) {
        while (it->second > 0) {
            output.push_back((it->first == 2) ? "Two" : ((it->first == 3) ? "Three" : ((it->first == 4) ? "Four" : ((it->first == 5) ? "Five" : ((it->first == 6) ? "Six" : ((it->first == 7) ? "Seven" : ((it->first == 8) ? "Eight" : "Nine")))))));
            it->second--;
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