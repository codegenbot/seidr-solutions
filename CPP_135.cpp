#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    int i = 0;
    while (i < arr.size() - 1) {
        if (arr[i] >= arr[i + 1]) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    vector<int> input; 
    cin >> input[0];
    int n;
    cin >> n;
    for(int i = 1 ; i <= n; i++) {
        int val;
        cin >> val;
        input.push_back(val);
    }
    assert(can_arrange(input) == -1); 
    return 0;
}