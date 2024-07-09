#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    arr.resize(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    
    vector<int> result = pluck(arr);

    if(result.size() > 1) {
        cout << "The smallest even number in the array at index ";
        cout << result[1] << " is: " << result[0] << endl;
    } else {
        cout << "No even numbers found." << endl;
    }
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = INT_MAX;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallest_even){
            smallest_even = arr[i];
        }
    }

    if(smallest_even != INT_MAX) {
        result.push_back(smallest_even);
        result.push_back(distance(arr.begin(), find_if(arr.begin(), arr.end(), bind(std::equal_to<int>(), _1, smallest_even))));
    } else {
        result.push_back(-1);
        result.push_back(-1);
    }

    return result;
}