#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i <= typename vector<int>::size_type(lst.size()) - 1; i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    return true;

int main() {
    { 
        assert(is_sorted({1, 2, 3, 4}) == true);
    }
}