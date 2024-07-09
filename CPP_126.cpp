for(int i = 0; i < lst.size()-1; ++i){
    if(lst[i] >= lst[i+1] || (i < lst.size()-2 && lst[i] == lst[i+1] && lst[i+1] == lst[i+2])){
        return false;
    }
}
return true;