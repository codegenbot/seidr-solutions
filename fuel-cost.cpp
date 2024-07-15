#include <vector>
using namespace std;

int main() {
    int sum = 0;
    vector<int> v = {1, 2, 3};
    for (int i : v) {
        int new_val = static_cast<int>(i / 3.0) - 2;
        sum += new_val;
    }
    return sum;
}