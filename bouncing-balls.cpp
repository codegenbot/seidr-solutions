```cpp
int main() {
    std::string line;
    double startHeight, firstBounce;
    int numBounces;

    std::getline(std::cin, line);
    std::istringstream iss(line);

    iss >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    std::cout << bouncinessIndex << " ";
    for (int i = 1; i <= numBounces; ++i) {
        firstBounce *= 0.5;
        std::cout << firstBounce << " ";
    }
    return 0;
}