#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    if(n == 0) return res; // Handle the edge case where input vector is empty
    int lastLeaderIndex = n - 1;
    for(int i=n-2; i>=0; i--){
        if(vec[i] >= vec[lastLeaderIndex]){
            lastLeaderIndex = i;
        }
    }
    res.push_back(vec[lastLeaderIndex]);
    return res;
}

int main() {
    vector<int> vec = {16, 17, 4, 3, 5, 2, 3, 7, 1, 6};
    vector<int> leadersVec = leaders(vec);
    for(int i : leadersVec) cout << i << " ";
    return 0;
}