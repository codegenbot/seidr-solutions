#include<vector>
long long double_the_difference(vector<int> lst){
	long long result=0;
    int len=lst.size();
    
    for(int i=0;i<len;i++){
    	if(lst[i]>0&&lst[i]%1==0&&lst[i]%2==1){
        	result+=(lst[i]*lst[i]);
        }
    }
    return result;
}
