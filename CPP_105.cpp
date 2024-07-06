#include <vector>
#include <string>

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        string str = "";
        switch (i) {
            case 1: str = "One"; break;
            case 2: str = "Two"; break;
            case 3: str = "Three"; break;
            case 4: str = "Four"; break;
            case 5: str = "Five"; break;
            case 6: str = "Six"; break;
            case 7: str = "Seven"; break;
            case 8: str = "Eight"; break;
            case 9: str = "Nine";
        }
        result.push_back(str);
    }
    return result;
}

int main() {
    assert(by_length({9, 4, 8}) == std::vector<std::string>({"Nine", "Eight", "Four"}));
    return 0;
}