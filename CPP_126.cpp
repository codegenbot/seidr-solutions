Here is the completed code:

```cpp
bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
        int count = 0;
        for(int j = 0; j < lst.size() - 1; j++){
            if(lst[j] == lst[j+1]){
                count++;
            }
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}