string result = "";
int n = a.length();
for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        result += "1";
    }
    else{
        result += "0";
    }
}
return result;
}