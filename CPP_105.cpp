#include <vector>
#include <string>

bool issame(vector<string> vec1, vector<string> vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 10 && num <= 99) {
            string str = to_string(num);
            vector<char> charVec(str.begin(), str.end());
            sort(charVec.begin(), charVec.end());
            if (!issame({str}, {string(charVec.begin(), charVec.end())})) {
                numbers.push_back("No");
            } else {
                numbers.push_back("Yes");
            }
        }
    }

    return numbers;
}