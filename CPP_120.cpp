#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int> b){
    if(a.size()!=b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

vector<int> input(vector<int> v, int k){
    cout<<"Enter the array: ";
    for(auto& num:v)
        cin>>num;
    cout<<"Enter k value: ";
    cin>>k;
    vector<int> result = maximum(v,k);
    return result;
}

int main() {
    vector<int> arr={1, 2, 3, -23, 243, -400, 0};
    int k=5;
    vector<int> result=input(arr,k);
    if(issame(result,{3,243,0,-23,-400}))
        cout<<"Output is correct"<<endl;
    else
        cout<<"Output is incorrect"<<endl;

    return 0;
}