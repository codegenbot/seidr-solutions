#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            leaders.push_back(rightmost);
        }
    }
    return leaders;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2, 8, 9};
    vector<int> output = leaders(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}