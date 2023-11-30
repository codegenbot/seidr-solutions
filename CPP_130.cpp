#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> tri(int n){
    vector<int> result;
    result.push_back(3); // tri(1) = 3

    if(n == 0){
        return result;
    }

    result.push_back(1); // tri(2) = 1 + (2 / 2) = 2

    if(n == 1){
        return result;
    }

    result.push_back(2); // tri(3) = tri(2) + tri(1) + tri(4) = 2 + 3 + 3 = 8

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            result.push_back(1 + i / 2);
        }else{
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }

    return result;
}

int main(){
    assert (issame(tri(1) , {1, 3}));
    assert (issame(tri(2) , {3, 2, 4}));
    assert (issame(tri(3) , {3, 2, 4, 2, 7}));
    assert (issame(tri(4) , {3, 2, 4, 2, 7, 4, 8}));
    assert (issame(tri(5) , {3, 2, 4, 2, 7, 4, 8, 5, 12}));

    cout << "All test cases pass" << endl;

    return 0;
}