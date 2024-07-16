int n = str.length();
    int left = 0, right = 0;

    for(int i = 0; i < n; i++){
        if(str[i] == '['){
            left++;
        } else {
            if(left > 0){
                left--;
                right++;
            }
        }
    }

    return right > 0;