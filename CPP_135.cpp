#include <vector>
using namespace std;

int can_arrange(vector<int> arr){
    int maxSoFar = arr[0];
    int lastMaxIndex = 0;
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= maxSoFar)
            return -1;
        if(arr[i-1] < arr[i])
            lastMaxIndex = i;
        else
            maxSoFar = arr[i];
    }
    return lastMaxIndex;
}