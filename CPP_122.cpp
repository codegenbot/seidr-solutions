#include <vector>
#include <cmath>

int add_elements(vector<int> arr, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i])+1 <= 2) sum += arr[i];
    }
    return sum;

}

int main() {
    assert (add_elements({1}, 1) == 1);
    vector<int> v = {5,6,7,8,9};
    int k = 3;
    cout << add_elements(v,k) << endl;
    return 0;
}