```c++
#include <vector>
using namespace std;

int basement(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> input = {-5, 3, 2, -4};
    int result = basement(input);
    if (result == -1) {
        cout << "No such index found." << endl;
    } else {
        cout << "The first index with a negative sum is: " << result << endl;
    }
    return 0;
}