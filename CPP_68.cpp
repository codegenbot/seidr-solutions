#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return {};

    int minEvenIndex = 0;
    for(int i = 0; i < arr.size(); ++i){
        if((arr[i] % 2 == 0) && (i < minEvenIndex || arr[minEvenIndex] > arr[i])){
            minEvenIndex = i;
        }
    }

    if(minEvenIndex != 0){
        result.push_back({arr[minEvenIndex], minEvenIndex});
    }

    return result;
}