#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    int count = 0;
    for (int i : b) {
        if (i == num) {
            count++;
        }
    }
    result.push_back(count);
    return result;
}

int main(){
    std::vector<int> b = {1, 2, 3, 2, 2, 4};
    int num = 2;

    std::vector<int> result = counts(b, num);

    for (int i : result) {
        std::cout << i << " ";
    }
}