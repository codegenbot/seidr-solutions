#include <vector>

bool monotonic(vector<float> l){
    bool increasing = true;
    bool decreasing = true;

    for(int i=1; i<l.size(); i++){
        if(l[i] < l[i-1]){
            increasing = false;
        }
        if(l[i] > l[i-1]){
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main(){
    assert(monotonic(vector<float>({9, 9, 9, 9})) == true);
    assert(monotonic(vector<float>({1, 2, 3, 4, 5})) == true);
    assert(monotonic(vector<float>({5, 4, 3, 2, 1})) == true);
    assert(monotonic(vector<float>({1, 2, 3, 2, 1})) == false);
    assert(monotonic(vector<float>({1, 1, 2, 2, 2, 3, 3})) == true);

    return 0;
}