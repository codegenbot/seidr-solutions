#include <vector>
#include <iostream>

using namespace std;

pair<int, int> pluck(vector<int> arr) {
    pair<int, int> result;
    if(arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.first = minEven;
    result.second = minIndex;

    return result;
}

int main() {
    vector<int> v1 = {12, 4, 6};
    pair<int, int> p = pluck(v1);

    cout << "Min even element: " << p.first << ", Index: " << p.second << endl;

    return 0;
}