#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    for (int i = 0; i < b.size(); ++i) {
        int count = 0;
        int curr = b[i];
        while (curr != 0) {
            if (curr % 10 == num) {
                count++;
            }
            curr /= 10;
        }
        result.push_back(count);
    }
    return result;
}

int main(){
    std::vector<int> input = {123, 456, 789};
    int number = 3;

    std::vector<int> result = counts(input, number);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
}

