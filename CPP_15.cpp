#include <string> 
#include <cassert> 
#include <iostream> 
using namespace std; 

string string_sequence(int n){
    string result;
    for(int i = 0; i <= n; ++i){
        result += to_string(i) + " ";
    }
    result.pop_back(); 
    return result;
}

int main(){
    assert (string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10"); 
    cout << "Test Passed!" << endl; 
    return 0;
}