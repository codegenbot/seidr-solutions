#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            result.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    result.push_back(arr.back());
    return result;
}

int main() {
    try {
        vector<int> inputVector;
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            int val;
            cin >> val;
            inputVector.push_back(val);
        }
        
        vector<int> outputVector = leaders(inputVector);
        
        cout << "Leaders: ";
        for (int leader : outputVector) {
            cout << leader << " ";
        }
        cout << endl;
    }catch(const std::exception& e){
        cerr << "Error: " << e.what() << endl;
    }
}