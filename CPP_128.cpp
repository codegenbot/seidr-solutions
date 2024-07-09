#include <vector>
using namespace std;

int prod_signs(vector<int> arr){
    int product = 1;
    long sum = 0;
    
    for(int i : arr){
        if(i == 0)product *= 1;
        else product *= (i > 0 ? 1 : -1);
        
        sum += abs(i);
   }
    
    return product * sum == 0 ? INT_MIN : product * sum;
}

int main() {
    assert (prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}