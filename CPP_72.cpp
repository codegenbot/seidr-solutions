Here's the solution:

bool will_it_fly(vector<int> q,int w){
    string str = "";
    for(int i=0; i<q.size(); i++){
        str += to_string(q[i]);
    }
    if(str!=std::string(str.rbegin(),str.end())){
        return false;
    }
    int sum = 0;
    for(int i: q){
        sum += i;
    }
    return (sum <= w);
}