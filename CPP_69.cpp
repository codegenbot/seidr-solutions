#include <vector>

using namespace std;

int search(const vector<int>& lst){
    int result = -1;
    for(int i = 1; i <= lst.size(); i++){
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == i){
                count++;
            }
        }
        if(count >= i && i > result){
            result = i;
        }
    }
    return result;
}

int main(){
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}