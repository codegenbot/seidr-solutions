int main 
{
    vector<int> lst;
    int num;    
    cout << "Enter numbers, enter -1 to stop: ";    
    while((cin >> num) && (num != -1)){
        lst.push_back(num);
    }    
    if(lst.empty())
        cout << "List is empty." << endl;
    else
        cout << (is_sorted(lst) ? "True" : "False") << endl; 
    return 0;
}
bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(std::count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    return true;
}