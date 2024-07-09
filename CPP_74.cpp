```
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> vec2) {
    if (a.size() != vec2.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != vec2[i]) return false;
    }
    return true;
}

bool total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return true;
    else if (sum1 > sum2) return false;
    else return true;
}

int main() {
    int b = 0;
    std::vector<std::string> vec1, vec2;
    
    // Read input from user
    for(int i=0; i<5; i++) {
        std::cout << "Enter string " << i+1 << ": ";
        std::string s;
        std::cin >> s;
        if(i < 2) vec1.push_back(s);
        else vec2.push_back(s);
    }
    
    // Check for total_match
    bool result = issame(vec1, vec2);
    if(result)
        cout << "Strings are same." << endl;
    else {
        cout << "Calculating..." << endl;
        std::vector<std::string> matched = total_match(vec1, vec2);
        if(issame(vec1, matched)) 
            cout << "After removing strings with length less than the average of both vectors, strings are same." << endl; 
        else
            cout << "Strings are not same after removal." << endl;
    }
    
    return 0;
}