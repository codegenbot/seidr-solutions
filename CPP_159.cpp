vector<int> eat(int number,int need,int remaining){
    vector<int> result;
    int total = number + need;
    int eaten = 0;
    
    if(total <= remaining){
        eaten = total;
    }else{
        eaten = remaining;
    }
    
    result.push_back(eaten);
    result.push_back(remaining - eaten);
    
    return result;
}