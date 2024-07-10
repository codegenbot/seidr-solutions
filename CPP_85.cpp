#include <vector>
using namespace std;

int main(){
    vector<int> lst = {4, 5, 6, 8};
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0) sum += lst[i];
    }
    return sum;
}