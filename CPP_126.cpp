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
    vector<int> lst;
    int num;
    cout << "Enter the elements of list, negative to stop: ";
    while(true){
        cin >> num;
        if(num < 0) break;
        lst.push_back(num);
    }
    if(is_sorted(lst))
        cout << "The list is sorted." << endl;
    else
        cout << "The list is not sorted." << endl;
    return 0;
}