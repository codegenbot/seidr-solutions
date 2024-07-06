#include <vector>
#include <queue>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[a.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> max_heap;
    for(int i:arr){
        max_heap.push(i);
        if(max_heap.size()>k)
            max_heap.pop();
    }
    vector<int> result(k);
    for(int i=k-1;i>=0;--i)
        result[i]=max_heap.top(),max_heap.pop();
    return result;
}

int main(){
    // Correct input value for k
    assert (issame(maximum({1, 2, 3, -23, 243, -400, 0}, 5) , {243, 23, 3, 2, 1})); 
    return 0;
}