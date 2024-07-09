bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            if(count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
        else
            return false;
    }
    return true;
}

int main() {
    vector<int> lst = {1, 2, 3, 4};
    cout << is_sorted(lst) << endl;
    return 0;
}