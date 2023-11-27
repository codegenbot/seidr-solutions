string output;
for(int i=0;i<a.length();i++){
    if(a[i] != b[i]){
        output+="1";
    }
    else{
        output+="0";
    }
}
return output;