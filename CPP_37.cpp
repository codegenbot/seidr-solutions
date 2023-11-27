vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    
    // Sorting even indices of the vector
    for(int i = 0; i < result.size(); i += 2){
        for(int j = i + 2; j < result.size(); j += 2){
            if(result[j] < result[i]){
                // Swapping values
                float temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    
    return result;
}