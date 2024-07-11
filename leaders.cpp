#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = arr.back();
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    return result;

}

int main() {
    vector<int> arr = {11, 693, 180, 524, 522, 846, 580, 794, 431, 0, 12, 412};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}