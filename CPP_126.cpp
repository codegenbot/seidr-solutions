for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            if(i != (lst.size() - 1) || (it == lst.end())){
                return false;
            }
        }
    }
    return true;
}
int main() {
    bool is_sorted(vector<int> lst);
    int num, size;
    cout << "Enter the size of the list: ";
    cin >> size;
    
    vector<int> lst(size);
    for(int i = 0; i < size; i++){
        cin >> lst[i];
    }
    
    if(is_sorted(lst)){
        cout << "The list is sorted." << endl;
    }else{
        cout << "The list is not sorted." << endl;
    }
    return 0;
}