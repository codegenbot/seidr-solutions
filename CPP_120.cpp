#include <vector>
#include <queue>

std::vector<int> maximum(std::vector<int> arr,int k){
    std::priority_queue<int> max_heap;
    for(int i:arr){
        max_heap.push(i);
        if(max_heap.size()>k)
            max_heap.pop();
    }
    std::vector<int> result(k);
    for(int i=k-1;i>=0;--i)
        result[i]=max_heap.top(),max_heap.pop();
    return result;
}

int main() {
    std::vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 5);
    // Use the result here...
}