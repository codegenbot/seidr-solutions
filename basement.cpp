```
#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main(int argc, char* argv[]) { 
    return basement({-2,1,3,-5,4,-1,2,1,-5,4}); 
}