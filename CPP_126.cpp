#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(find(lst.begin(), lst.end(), lst[i]) != lst.end() || next_count(lst, lst[i]) > 1){
            return false;
        }
    }
    return true;

}

int main() {
    vector<int> lst = {1,2,3,4};
    cout << (is_sorted(lst) ? "True" : "False") << std::endl;
}