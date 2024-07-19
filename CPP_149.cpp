#include <iostream>
#include <vector>
#include <algorithm>

bool issame(string s1, string s2) {
    int sum1 = 0, sum2 = 0;
    
    for (char c : s1)
        sum1 += c;
        
    for (char c : s2)
        sum2 += c;

    return sum1 == sum2;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    std::vector<std::string> lst = {"A1", "B2", "C3", "D4"};
    std::vector<std::string> output = sorted_list_sum(lst);
    
    for (const auto& str : output) {
        if (issame(str, "A1")) {
            std::cout << "Sum of strings is the same: " << str << "\n";
        } else {
            std::cout << "Sum of strings is not the same: " << str << "\n";
        }
    }

    return 0;
}