#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> largest_smallest_int(vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && lst[i] > largest_negative){
            largest_negative = lst[i];
        }
        if(lst[i] > 0 && lst[i] < smallest_positive){
            smallest_positive = lst[i];
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main(){
    vector<int> input = {-6, -4, -4, -3, -100, 1};
    vector<int> expected_output = {-3, 1};
    
    vector<int> output = largest_smallest_int(input);
    
    cout << "Output: " << output[0] << " " << output[1] << endl;
    cout << "Expected Output: " << expected_output[0] << " " << expected_output[1] << endl;
    
    return 0;
}