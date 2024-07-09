#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;
    vector<string> lst;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        lst.push_back(temp);
    }
    vector<string> result = sorted_list_sum(lst);
    return 0;
}

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end());
    long sum = 0;
    for (const auto& str : lst) {
        sum += str.length();
    }
    std::string res = "Sum: ";
    res += to_string(sum);
    vector<std::string> result{res};
    return result;
}