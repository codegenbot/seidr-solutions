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
    for(int i=0;i<5;i++)input.push_back(i);
    assert(can_arrange(input) == -1); 
    return 0;
}