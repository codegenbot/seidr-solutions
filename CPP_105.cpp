```cpp
bool issame(vector<string> a,vector<string>b){
    return (a == b);
}

int main() {
    vector<int> arr = {1,2,3};
    vector<string> result = by_length(arr);
    assert(issame(result, {"Nine","Eight","Seven"}));
    return 0;
}