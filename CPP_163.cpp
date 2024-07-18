#include <vector>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b){
    return {};
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(generate_integers(17,89) , {}));
    return 0;
}