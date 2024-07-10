#include <vector>

using namespace std;

int can_arrange(vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= arr[i-1]){
            return i - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr;
    int n, temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    
    cout << "The smallest index 'i' such that arr[0..i] is in ascending order, or -1 if the array cannot be arranged:" << can_arrange(arr) << endl;
    return 0;
}