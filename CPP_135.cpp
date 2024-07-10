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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        arr.push_back(x);
    }
    
    cout << "First index at which array cannot be arranged in increasing order: " << can_arrange(arr) << endl;
    return 0;
}