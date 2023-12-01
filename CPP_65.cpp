string circular_shift(int x, int shift){
    string str = to_string(x); // convert integer to string
    int n = str.length(); // get the number of digits

    if(shift > n){
        reverse(str.begin(), str.end()); // reverse the string
    }else{
        rotate(str.begin(), str.begin() + n - shift, str.end()); // rotate the string
    }

    return str; // return the circular shifted string
}