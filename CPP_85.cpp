#include <initializer_list>

using namespace std;

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0) sum += lst[i];
    }
    return sum;

}

int main() {
    vector<int> vec = {4, 4, 6, 8};
    assert (add(vec) == 12);
    
}