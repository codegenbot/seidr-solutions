vector<int> maximum(vector<int> arr,int k){
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

int main() {
    vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 4);
    // Use the result here...
}