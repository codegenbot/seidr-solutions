#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
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

using namespace std;

int main() {
    vector<string> inputStrings;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string str;
        cout << "Enter string " << (i+1) << ": ";
        getline(cin, str);
        inputStrings.push_back(str);
    }
    
    vector<string> output = sorted_list_sum(inputStrings);
    
    // Test assertion
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == vector<string>({"cc", "dd", "aaaa", "bbbb"}));
    
    return 0;
}