#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int index = -1;
    
    for(int i=0; i<vec.size(); i++) {
        int sumLeft = 0, sumRight = 0;
        
        for(int j=0; j<i; j++) {
            sumLeft += vec[j];
        }
        
        for(int j=i; j<vec.size(); j++) {
            sumRight += vec[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if(diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + index);
    vector<int> right(vec.begin() + index, vec.end());
    
    return {left, right};
}

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    
    auto result = cutVector(vec);
    
    cout << "Left: ";
    for(auto num : result[0]) {
        cout << num << ' ';
    }
    cout << endl;
    
    cout << "Right: ";
    for(auto num : result[1]) {
        cout << num << ' ';
    }
    cout << endl;
    
    return 0;
}