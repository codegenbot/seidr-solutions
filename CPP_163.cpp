#include <vector>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b);

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

int main(){
    assert(issame(generate_integers(17, 89), vector<int>{}));

    return 0;
}