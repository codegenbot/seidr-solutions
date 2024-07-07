```cpp
#include <vector>
using namespace std;

int solution(vector<int> arr) {
    int sum = 0;
    for (int i : arr) {
        if (i % 2 != 0)
            sum += i;
    }
    return sum;
}

int main() {
    int sum = solution({3, 13, 2, 9});
    cout << "Result: " << sum;
    cout << endl;
    return 0;
}