int next_larger(std::vector<int> lst) {
    for(int i = lst.size() - 1; i >= 0; i--){
        int left = i-1;
        int right = i+1;
        while(left >= 0 && right < lst.size()){
            if(lst[left] < lst[i] && lst[right] > lst[i]){
                return lst[i];
            }
            else{
                if(lst[left] < lst[i]) left--;
                else if (lst[right] > lst[i]) right++;
                else break;
            }
        }
    }
    return -1; 
}