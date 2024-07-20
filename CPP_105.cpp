#include <string>
#include <vector>

bool compare(const std::string &a, const std::string &b) {
    return a == b;
}

int main() {
    vector<int> arr = {9, 4, 8};
    vector<string> result = by_length(arr);
    if (result == vector<string>({"Nine", "Eight", "Four"})) {
        cout << "The result is same." << endl;
    }
}