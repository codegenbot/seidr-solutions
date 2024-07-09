#cplusplus -std=c++11

#include <algorithm>
#include <vector>
#include <initializer_list>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) 
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;

}

int sorted_list_sum(std::initializer_list<std::string> s) {
    int sum = 0;
    for (const auto& str : s) {
        sum += str.length();
    }
    return sum;
}

int main() {
    std::vector<std::string> b={"aaaa", "bbbb", "dd", "cc"};
    assert(issame(std::vector<std::string>({"aaaa", "bbbb", "dd", "cc"}), b));
    int result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    std::cout << "sorted_list_sum: " << result << std::endl;
    return 0;
}