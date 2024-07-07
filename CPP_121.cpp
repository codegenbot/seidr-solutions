#include <iostream>
#include <vector>

int solution(std::vector<int> arr) {
    int result = 0;
    for (int i : arr) {
        result += i % 2;
    }
    return result;
}

int main() {
    using namespace std;
    int sum = solution({3, 13, 2, 9});
    cout << "Result: " << sum << endl;
    return 0;
}