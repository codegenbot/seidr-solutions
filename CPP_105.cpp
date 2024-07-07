```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string str = to_string(num);
            if (str == "1") str = "One";
            else if (str == "2") str = "Two";
            else if (str == "3") str = "Three";
            else if (str == "4") str = "Four";
            else if (str == "5") str = "Five";
            else if (str == "6") str = "Six";
            else if (str == "7") str = "Seven";
            else if (str == "8") str = "Eight";
            else if (str == "9") str = "Nine";
            nums.push_back(str);
        }
    }

    map<int, int> lengthCount;
    for (string num : nums) {
        int len = num.length();
        if (lengthCount.find(len) != lengthCount.end()) {
            lengthCount[len]++;
        } else {
            lengthCount[len] = 1;
        }
    }

    vector<string> output;
    for (auto it = lengthCount.rbegin(); it != lengthCount.rend(); ++it) {
        while (it->second > 0) {
            if(it->first == 1)
                output.push_back("One");
            else if(it->first == 2)
                output.push_back("Two");
            else if(it->first == 3)
                output.push_back("Three");
            else if(it->first == 4)
                output.push_back("Four");
            else if(it->first == 5)
                output.push_back("Five");
            else if(it->first == 6)
                output.push_back("Six");
            else if(it->first == 7)
                output.push_back("Seven");
            else if(it->first == 8)
                output.push_back("Eight");
            else
                output.push_back("Nine");
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