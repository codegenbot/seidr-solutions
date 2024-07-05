#include <vector>
using namespace std;

int main() {
    vector<int> leaders(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        int maxRight = arr[n-1];
        for(int i=n-1; i>=0; i--) {
            if(arr[i] >= maxRight) {
                res.push_back(arr[i]);
                maxRight = arr[i];
            }
        }
        return res;
    }

    vector<int> arr;
    int num;
    
    cout << "Enter numbers: ";
    while (cin >> num) {
        arr.push_back(num);
    }
    
    vector<int> result = leaders(arr);
    
    if(result.size() > 0) {
        cout << "Leaders are: ";
        for(int i=0; i<result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No leaders found." << endl;
    }

    return 0;
}