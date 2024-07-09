int sum = 0;
for(int i=0; i<lst.size(); i++){
    for(int j=0; j<lst[i].size(); j++){
        if(lst[i][j] == '('){
            sum++;
        }
        else{
            sum--;
        }
    }
    if(sum != 0) return "No";
}
if(sum == 0) return "Yes";
return "No";