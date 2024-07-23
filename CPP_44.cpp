string change_base(int x,int base){
    string res = "";
    while(x > 0){
        int rem = x % base;
        if(rem < 10)
            res += to_string(rem);
        else{
            switch(rem){
                case 10:
                    res += "A";
                    break;
                case 11:
                    res += "B";
                    break;
                case 12:
                    res += "C";
                    break;
                case 13:
                    res += "D";
                    break;
                case 14:
                    res += "E";
                    break;
                case 15:
                    res += "F";
                    break;
            }
        }
        x /= base;
    }
    return res;
}