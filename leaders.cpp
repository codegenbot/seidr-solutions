#include <vector>
#include <iostream>

int main() {
    using namespace std;
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        
        if(n == 0)
            return result;

        int max_right = arr[n-1];
        result.push_back(max_right);

        for(int i=n-2; i>=0; --i){
            if(arr[i] >= max_right){
                max_right = arr[i];
                result.push_back(max_right);
            }
        }
        
        return result;
    }

    vector<int> input;
    int n;
    cin >> n;
    
    for(int i=0; i<n; ++i){
        int num;
        cin >> num;
        input.push_back(num);
    }

    vector<int> result = leaders(input);

    cout << "[";
    for(int i=0; i<result.size(); ++i){
        if(i != 0)
            cout << ", ";
        cout << result[i];
    }
    cout << "]"<<endl;
    
    return 0;
}