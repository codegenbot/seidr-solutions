Here is the completed code:

#include <iostream>
using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst; 
    sort(sorted.begin(), sorted.end());
    
    for(int i = 0; i < sorted.size() - 1; i++){
        if(sorted[i] != sorted[i+1]) return sorted[i+1];
    }
    return -1;
}

int main(){
    vector<int> lst = {1,2,3,4,5};
    cout << next_smallest(lst) << endl;
    
    vector<int> lst1 = {5, 1, 4, 3, 2};
    cout << next_smallest(lst1) << endl;
    
    vector<int> lst2 = {};
    if(next_smallest(lst2) == -1)
        cout << "None" << endl;
        
    vector<int> lst3 = {1,1};
    if(next_smallest(lst3) == -1)
        cout << "None" << endl;
    
    return 0;
}