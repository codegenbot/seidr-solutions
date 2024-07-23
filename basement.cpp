#include <vector>

int firstNegative(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += arr[j];
            if (sum < 0)
                return i;
        }
    }
    return -1;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<firstNegative(input)<<endl;
    
}