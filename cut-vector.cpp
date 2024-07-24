#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for(int i=1; i<vec.size(); i++){
        int sumLeft = 0, sumRight = 0;
        
        for(int j=0; j<i; j++){
            sumLeft += vec[j];
        }
        
        for(int k=i; k<vec.size(); k++){
            sumRight += vec[k];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if(diff < minDiff){
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + splitIndex);
    vector<int> right(vec.begin() + splitIndex, vec.end());
    
    return {left, right};
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    auto res = cutVector(vec);
    cout << res[0].size() << endl;
    for(int num : res[0]){
        cout << num << " ";
    }
    cout << endl;
    cout << res[1].size() << endl;
    for(int num : res[1]){
        cout << num << " ";
    }
    return 0;
}