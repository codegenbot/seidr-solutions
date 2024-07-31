#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst);

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for(int num : lst){
        if(num < 0 && num < largest_negative){
            largest_negative = num;
        }
        if(num > 0 && (num < smallest_positive || smallest_positive == 0)){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    vector<int> input = {-5, 3, 1, -10, 7};
    vector<int> result = largest_smallest_integers(input);
    
    cout << "Largest negative: " << result[0] << " Smallest positive: " << result[1] << "\n";
    
    vector<int> check1 = {-10, 1};
    vector<int> check2 = largest_smallest_integers(input);
    
    if(issame(check1, check2)){
        cout << "Output is correct!\n";
    } else {
        cout << "Output is incorrect!\n";
    }
    
    return 0;
}