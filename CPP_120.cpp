#include <vector>
#include <queue>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
    }
    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 5), {0, 2, 3, 23, 243}));
    return 0;
}