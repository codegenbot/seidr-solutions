#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr);

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i<n; i++) {
        int x;
        cout << "Enter element " << (i+1) << ": ";
        cin >> x;
        arr.push_back(x);
    }
    vector<int> result = pluck(arr);
    if(result.size() > 0) {
        cout << "The smallest even number is: " << result[0] << endl;
        cout << "The index of the smallest even number is: " << result[1] << endl;
    } else {
        cout << "No even numbers found." << endl;
    }
    return 0;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEven);
    result.push_back(minIndex);

    return result;
}