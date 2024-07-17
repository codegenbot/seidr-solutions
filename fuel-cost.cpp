#include <vector>
using namespace std;

int solution(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3 - 2);
        if (result < 0) {
            result = 0;
        }
        total += result;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << solution(numbers) << endl;
    return 0;
}