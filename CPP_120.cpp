#include <iostream>
#include <vector>
using namespace std;

std::vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), min(arr.begin() + k, arr.end()));
    sort(result.begin(), result.end());
    return result;
}

int main(){
    cout << "Maximum elements: ";
    for(int i = 0; i < maximum({1, 2, 3, -23, 243, -400, 0}, 7).size(); i++){
        cout << maximum({1, 2, 3, -23, 243, -400, 0}, 7)[i] << " ";
    }
    return 0;
}