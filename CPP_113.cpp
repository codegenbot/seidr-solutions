#include <iostream>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<int> odd_count(vector<string> lst) {
    vector<int> result;
    for (string s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back(oddCount);
    }
    return result;
}

int main() {
    // Test the modified odd_count function
    vector<string> input = {"12345", "67890", "13579"};
    vector<int> output = odd_count(input);

    for (int count : output) {
        cout << "Number of odd elements: " << count << endl;
    }

    return 0;
}