#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(int a, int b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        bool exists = false;
        for (int j = 0; j < result.size(); j++) {
            if (issame(result[j], numbers[i])) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    vector<int> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        numbers.push_back(num);
    }
    
    vector<int> result = remove_duplicates(numbers);
    
    cout << "The duplicates are: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}