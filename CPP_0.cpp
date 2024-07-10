for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            if(fabs(numbers[i] - numbers[j]) < threshold){
                return true;
            }
        }
    }
    return false;
}