string numStr = to_string(x);
    int len = numStr.length();
    shift = shift % len;
    
    if(shift == 0){
        return numStr;
    } else if(shift == len){
        reverse(numStr.begin(), numStr.end());
        return numStr;
    } else {
        rotate(numStr.rbegin(), numStr.rbegin() + shift, numStr.rend());
        return numStr;
    }
}