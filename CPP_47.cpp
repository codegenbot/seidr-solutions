#include <vector>
#include <cmath>

using namespace std;

float median(vector<float>& l){
    sort(l.begin(), l.end());
    int n = l.size();
    if(n % 2 == 0){
        return (l[n/2] + l[(n/2)-1]) / 2.0;
    }else{
        return l[n/2];
    }
}

int main(){
    vector<float> numbers = {8, 1, 3, 9, 9, 2, 7};
    float result = median(numbers);
    return 0;
}