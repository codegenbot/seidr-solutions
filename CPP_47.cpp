#include <vector>
#include <algorithm> // for std::sort

float median(std::vector<float> l);

float median(std::vector<float> l){
    std::sort(l.begin(), l.end());
    int n = l.size();
    if(n%2 == 0){
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    }
    else{
        return l[n/2];
    }
}

int main(){
    assert(median({8, 1, 3, 9, 9, 2, 7}) == 7);
    return 0;
}