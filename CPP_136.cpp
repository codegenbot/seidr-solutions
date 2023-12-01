#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0;
    int min_positive = 0;
    
    for(int num : lst){
        if(num < 0 && num < max_negative){
            max_negative = num;
        }
        if(num > 0 && (num < min_positive || min_positive == 0)){
            min_positive = num;
        }
    }
    
    return {max_negative, min_positive};
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    
    if(issame(a, b)){
        cout << "The vectors are the same" << endl;
    } else {
        cout << "The vectors are different" << endl;
    }
    
    return 0;
}