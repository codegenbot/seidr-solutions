```
#include <vector>
using namespace std;

int can_arrange(vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return i;
    }
    return -1;
}

int main(){
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        input.push_back(val);
    }
    cout << can_arrange(input) << endl;
    return 0;
}