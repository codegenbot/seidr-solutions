float max_element(vector<float> l){
    float max_num = l[0];
    for(auto num : l){
        if(num > max_num){
            max_num = num;
        }
    }
    return max_num;
}