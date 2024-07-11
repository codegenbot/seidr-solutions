sort(numbers.begin(), numbers.end());
    for(int i=0; i<numbers.size()-1; i++){
        if(fabs(numbers[i] - numbers[i+1]) < threshold){
            return true;
        }
    }
    return false;
}