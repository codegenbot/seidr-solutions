#include <iostream>
#include <vector>

using namespace std;

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    // vector<int> pluck(vector<int> arr) {
    //     vector<int> result;
    //     if (arr.empty()) return result;

    //     int minEvenValue = INT_MAX;
    //     int minIndex = -1;

    //     for (int i = 0; i < arr.size(); i++) {
    //         if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
    //             minEvenValue = arr[i];
    //             minIndex = i;
    //         }
    //     }

    //     if (minEvenValue != INT_MAX) {
    //         result.push_back(minEvenValue);
    //         result.push_back(minIndex);
    //     }

    //     return result;
    // }

    vector<int> pluck(vector<int> arr) {
        vector<int> result;
        if (arr.empty()) return result;

        int minEvenValue = INT_MAX;
        int minIndex = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
                minEvenValue = arr[i];
                minIndex = i;
            }
        }

        if (minEvenValue != INT_MAX) {
            result.push_back(minEvenValue);
            result.push_back(minIndex);
        }

        return result;
    }