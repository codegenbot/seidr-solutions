```cpp
```cpp
bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            int j = i - 1;
            while(j >= 0 && i > j && lst[j] == lst[i]) {
                j--;
            }
            if(i - j - 1 > 1) return false;
            i = j + 1;
        }
    }
    return true;
}

int main() {
    assert (is_sorted({1, 2, 3, 4}) == true);
    return 0;
}
```