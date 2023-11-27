#include <iostream>
#include <vector>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    int product = 1;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        product *= arr[i] >= 0 ? 1 : -1;
        sum += abs(arr[i]);
    }
    return product * sum;
}

int main(){
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << "Result: " << prod_signs(arr) << endl;
    
    return 0;
}