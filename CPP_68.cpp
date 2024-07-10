#include <iostream>
#include <vector>

using namespace std;

vector<int> pluck(const vector<int>& n) {
    vector<int> result;

    for (int x : n) {
        if(x == 7 || x == 9)
            result.push_back(1); 
        else if(x == 1)
            result.push_back(0); 

    }

    return result; 

}

int main() {
    vector<int> v1 = {7, 9, 7, 1};
    vector<int> v2;

    if (pluck(v1) == pluck({7, 9, 7, 1}))  
        cout << "Arrays are same" << endl;
    else   
        cout << "Arrays are not same" << endl;

    return 0;
}