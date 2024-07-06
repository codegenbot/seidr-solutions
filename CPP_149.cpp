```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b);
vector<string> sorted_list_sum(vector<string> lst);

// ... existing code ...

bool issame(vector<string> a, vector<string> b) {
    int sum1 = 0;
    int sum2 = 0;
    
    for (const auto& str : a) {
        sum1 += std::stoi(str);
    }
    
    for (const auto& str : b) {
        sum2 += std::stoi(str);
    }
    
    return sum1 == sum2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    int sum = 0;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
            sum += std::stoi(str);
        }
    }

    sort(result.begin(), result.end());
    vector<string> finalResult;

    for (const auto& str : result) {
        int tempSum = sum;
        bool found = false;
        
        while (!found) {
            if (tempSum - std::stoi(str) >= 0) {
                tempSum -= std::stoi(str);
                finalResult.push_back(str);
                found = true;
            } else {
                break;
            }
        }
    }

    return finalResult;
}