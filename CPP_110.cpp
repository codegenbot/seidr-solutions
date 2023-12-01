#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2){
    int oddCount = 0;
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            oddCount++;
        }
    }
    if(oddCount == 0){
        return "YES";
    }
    for(int i=0; i<lst2.size(); i++){
        if(lst2[i] % 2 != 0){
            oddCount--;
        }
    }
    if(oddCount <= 0){
        return "YES";
    }
    return "NO";
}

int main(){
    assert (exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}