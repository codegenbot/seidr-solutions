```cpp
```cpp
bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool flag = true;
            for(int j = 0; j < i; j++){
                while(j+1 < i && lst[j] == lst[j+1]){
                    j++;
                }
                temp.push_back(lst[j]);
            }
            if(temp.size() > 1) return false;
        }
    }
    return true;
}

int main() {
    assert (is_sorted({1, 2, 3, 4}) == true);
    return 0;
}
```