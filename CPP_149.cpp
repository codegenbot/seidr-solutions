#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst);

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst){
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].length() % 2 == 0) {
            result.push_back(lst[i]);
        }
    }
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    using namespace std;
    vector<string> expected_output = {"cc", "dd", "aaaa", "bbbb"};
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> result = sorted_list_sum(input);
    
    if (issame(result, expected_output)){
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}