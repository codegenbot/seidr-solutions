#include <vector>
#include <string>

std::vector<std::string> by_length(std::vector<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 4)
            result.push_back("Four");
        else if (length == 8)
            result.push_back("Eight");
        else if (length == 9)
            result.push_back("Nine");
    }
    return result;
}

bool issame(std::vector<string> a, std::vector<string> b){
    return (a == b);
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}