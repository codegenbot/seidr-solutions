```cpp
vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}
bool issame(vector<string> a,vector<string>b){
    return a==b;
}
int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> result = sorted_list_sum(lst);
    assert (issame(result , {"aaaa","bbbb","cc","dd"})); 
    return 0;
}