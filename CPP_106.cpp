#include <vector>

std::vector<int> f(int n);

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = f(n);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}

std::vector<int> f(int n){
    std::vector<int> result;
    int sum = 0;
    int fact = 1;
    
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            fact *= i;
            result.push_back(fact);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    
    return result;
}