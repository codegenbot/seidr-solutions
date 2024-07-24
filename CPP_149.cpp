#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
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

int sorted_list_sum(const vector<string>& lst) {
    int sum = 0;
    for (const auto& str : lst) {
        std::vector<std::string> split_str = split(str, ' ');
        if(issame({{"hello", "world"}}, vector<string>(split_str.begin() + 1, split_str.end()))) {
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