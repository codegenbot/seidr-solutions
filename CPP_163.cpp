#include <vector>
#include <cassert>

std::vector<int> issame(int a, int b) {
    std::vector<int> result;
    for(int i = a + 1; i < b; i++){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame(17, 89) == std::vector<int>{18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88});
    return 0;
}