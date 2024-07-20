#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sorted_arr;

    // Remaining code as is

    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    
    return 0;
}