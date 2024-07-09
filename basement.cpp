#include <vector>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> v;
    int input;
    while(true) {
        std::cout << "Enter an integer (-1 to finish): ";
        std::cin >> input;
        if(input == -1)
            break;
        v.push_back(input);
    }
    int result = basement(v);
    std::cout << "The first index with negative sum is: " << result << "\n";
    return 0;
}