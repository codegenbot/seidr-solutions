Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    int count = 0;
    for(int num: lst){
        if(num == 0){
            count++;
        }else{
            break;
        }
    }
    return count <= 1;
}