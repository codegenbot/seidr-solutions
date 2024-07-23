int main() {
    std::vector<float> myVector;
    int n;
    float temp;

    // Read the number of elements
    std::cin >> n;

    // Read each element and add to vector
    for(int i = 0; i < n; ++i) {
        std::cin >> temp;
        myVector.push_back(temp);
    }

    long long result = double_the_difference(myVector);

    return 0;
}