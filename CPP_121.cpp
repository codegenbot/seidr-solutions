#include <vector>
#include <initializer_list>
#include <assert.h>
#include <iostream>  
using namespace std;

int solutions(vector<int> lst) {
    if (lst.size() == 0) {
        return -1;
    }
    return 0; 
}

int main() {
    vector<int> lst = {3, 13, 2, 9};
    int result = solutions(lst);
    cout << "Result: " << result << endl;
    return 0;
}