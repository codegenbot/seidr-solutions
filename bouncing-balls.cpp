```c++
int main() {
    std::string heightStartStr, heightFirstBounceStr;
    int numBounces;

    std::cin >> heightStartStr >> heightFirstBounceStr >> numBounces;

    double heightStart = stod(heightStartStr);
    double heightFirstBounce = stod(heightFirstBounceStr);

    double bouncinessIndex = heightFirstBounce / heightStart;

    totalDistance = 0.0;
    double height = heightStart; // initialize with starting height
    for (int i = 1; i <= numBounces; i++) {
        height *= bouncinessIndex * 2; // calculate the new height after each bounce
        totalDistance += height - heightStart; // add up all the distances traveled
    }

    std::cout << std::fixed << std::setprecision(6) << totalDistance;

    return 0;
}