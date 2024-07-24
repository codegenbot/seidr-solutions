#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(const std::vector<std::string>& lst) {
    int sum = 0;
    for (const auto& str : lst) {
        if(issame({{"hello", "world"}}, vector<string>(split(str, ' ') + 1, split(str, ' ').end()))) {
            sum += std::stoi(str.substr(6));
        }
    }
    return sum;
}

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::stringstream ss(s);
    std::string item;
    std::vector<std::string> items;
    while (std::getline(ss, item, delimiter)) {
        items.push_back(item);
    }
    return items;
}

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    assert(sorted_list_sum(lst) == 2);
    return 0;
}