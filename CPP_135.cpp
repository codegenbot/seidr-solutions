#include <vector>
using namespace std;

int can_arrange(vector<int> arr);

int main() {
    int size;
    cin >> size;
    vector<int> input(size);
    for(int i = 0; i < size; i++) {
        cin >> input[i];
    }
    
    cout << can_arrange(input) << endl;
}

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}