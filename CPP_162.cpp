#include <iostream>
#include <vector>

using namespace std;

long long int numPairs(vector<int> arr){
    long long int count = 0;

    // Count number of even and odd numbers in the array
    int evenCount = 0, oddCount = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    // Calculate number of pairs
    count = (evenCount * (evenCount - 1))/2 + (oddCount * (oddCount - 1))/2;
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long long int result = numPairs(arr);
    cout << result;

    return 0;
}