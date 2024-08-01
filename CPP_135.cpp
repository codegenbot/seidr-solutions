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
    cout << "Enter numbers: ";
    for(int j = 0; j < 5; j++) {
        int num;
        cin >> num;
        input.push_back(num);
    }
    assert(can_arrange(input) == -1); 
    return 0;
}