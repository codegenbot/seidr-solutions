std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numbers;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            numbers.push_back(i);
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    std::vector<std::string> result;
    for (int num : numbers) {
        std::string str = "";
        switch (num) {
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