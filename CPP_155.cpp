#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

int even_odd_count(std::vector<int> numbers) {
    int even_count = 0;
    int odd_count = 0;
    
    for(int num : numbers) {
        if(num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return even_count - odd_count;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Add your main function logic here
    return 0;
}