```c++
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << "\n";
    
    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    std::cout << "[";
    for (const auto& i : result) {
        std::cout << i;
        if (i < text.size() - target.size()) std::cout << ", ";
    }
    std::cout << "]\n";

    return 0;
}