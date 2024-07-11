```c++
bool is_sorted(vector<int> lst);

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
}

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1]){
            if(count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        } else
            return false;
    }
    return true;
}