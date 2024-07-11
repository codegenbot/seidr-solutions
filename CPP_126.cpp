for(int i=0; i<lst.size()-1; i++){
    if(lst[i] >= lst[i+1] || count(lst.begin(), lst.end(), lst[i]) > 1){
        return false;
    }
}
return true;