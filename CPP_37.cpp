vector<float> sort_even(vector<float> l){
    vector<float> sorted_even;
    vector<float> odd_values;

    for(int i=0; i<l.size(); i++){
        if(i%2==0){
            sorted_even.push_back(l[i]);
        }
        else{
            odd_values.push_back(l[i]);
        }
    }

    sort(sorted_even.begin(), sorted_even.end());

    vector<float> result;
    int even_counter = 0;
    int odd_counter = 0;

    for(int i=0; i<l.size(); i++){
        if(i%2==0){
            result.push_back(sorted_even[even_counter]);
            even_counter++;
        }
        else{
            result.push_back(odd_values[odd_counter]);
            odd_counter++;
        }
    }

    return result;
}