```c++
int main() {
    std::string heightStartStr, heightFirstBounceStr;
    int numBounces;

    std::cin >> heightStartStr >> heightFirstBounceStr >> numBounces;

    double heightStart = std::stod(heightStartStr);
    double heightFirstBounce = std::stod(heightFirstBounceStr);

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        double height = heightStart * pow(bouncinessIndex, 2*i);
        totalDistance += height - heightStart;
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout << totalDistance;

    return 0;
}