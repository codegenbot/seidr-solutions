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
    assert(monotonic(vector<float>({1, 2, 3, 4})) == true);
    assert(monotonic(vector<float>({5, 3, 2, 1})) == true);
    assert(monotonic(vector<float>({1, 3, 2, 5})) == false);
    assert(monotonic(vector<float>({1.5, 2.5, 3.5, 4.5})) == true);
    assert(monotonic(vector<float>({1.5, 1, 0.5, 0})) == true);
    assert(monotonic(vector<float>({1, 2, 3, 2, 1})) == false);
    // Add more test cases here

    return 0;
}