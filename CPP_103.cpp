Here is the completed code:

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    int avg = (int)(sum / ((double)m-n+1));
    return to_string(avg) + "b" + std::bitset<32>(abs(avg)).to_string().erase(0,2).erase(std::string::size()-2,1);