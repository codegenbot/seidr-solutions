#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    int indices[1000000];
    int count = 0;
    for(int i = 0; i <= text.length() - target.length(); i++) {
        bool isTarget = true;
        for(int j = 0; j < target.length(); j++) {
            if(text[i+j] != target[j]) {
                isTarget = false;
                break;
            }
        }
        if(isTarget) {
            indices[count++] = i;
        }
    }
    std::vector<int> result(count);
    for(int i = 0; i < count; i++) {
        result[i] = indices[i];
    }
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << "\n";
    
    std::string text, target;
    std::cin >> text >> target;
    for(auto i : indicesOfSubstring(text, target)) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
    return 0;
}