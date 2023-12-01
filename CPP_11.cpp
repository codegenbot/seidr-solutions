string result = "";
int n = a.length();
for(int i=0; i<n; i++){
    if(a[i] == b[i]){
        result += "0";
    } else {
        result += "1";
    }
}
return result;