#include <vector>
#include <string>

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back((i == 1 ? "One" : (i == 2 ? "Two" : (i == 3 ? "Three" : (i == 4 ? "Four" : (i == 5 ? "Five" : (i == 6 ? "Six" : (i == 7 ? "Seven" : (i == 8 ? "Eight" : "Nine")))))))));
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    assert(by_length({9, 4, 8}) == std::vector<std::string>({"Nine", "Eight", "Four"}));
    return 0;
}