#include <vector>
#include <string>

bool issame(vector<string> arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] != "Nine" && arr[i] == arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool checkio(vector<int> numbers) {
    vector<string> strNums = by_length(numbers);
    for(int i: strNums) {
        cout << i << endl;
    }
    bool same = issame(strNums);
    if (same) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

int main() {
    checkio({9, 4, 8});
}