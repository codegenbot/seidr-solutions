bool will_it_fly(vector<int> q,int w){
    for(int i:q)string str="";str+=to_string(i);
    if(str!=reverse(str))return false;
    int sum=0;
    for(int i:q)sum+=i;
    return sum<=w;