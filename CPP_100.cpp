#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    std::vector<int> a, b;
    int num;
    
    // Input vector a
    do {
        std::cin >> num;
        if (num != -1) {
            a.push_back(num);
        }
    } while (num != -1);
    
    // Input vector b
    do {
        std::cin >> num;
        if (num != -1) {
            b.push_back(num);
        }
    } while (num != -1);
    
    std::cout << (issame(a, b) ? "true" : "false");
}