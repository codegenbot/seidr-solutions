#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() % 2 == 1 && b[i].size() % 2 == 0 || 
           a[i].size() % 2 == 0 && b[i].size() % 2 == 1) 
            return false;
    }
    
    return true;
}

vector<string> sorted_list_sum(vector<string> input) {
    vector<string> result;
    for (string str : input) {
        int sum = 0;
        for(char ch: str) {
            sum += ch;
        }
        result.push_back(to_string(sum));
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::vector<std::string> a, b;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << i+1 << ": ";
        std::cin >> s;
        a.push_back(s);
    }

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << i+1 << ": ";
        std::cin >> s;
        b.push_back(s);
    }

    if(issame(a, b)) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::vector<string> a_sorted = sorted_list_sum(a);
        std::vector<string> b_sorted = sorted_list_sum(b);

        if (a_sorted == b_sorted) {
            std::cout << "The lists are the same after sorting and summing character values." << std::endl;
        } else {
            std::cout << "The lists are not the same after sorting and summing character values." << std::endl;
        }
    }
    
    return 0;
}