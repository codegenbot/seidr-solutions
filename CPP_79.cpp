string result = "db";
    if(decimal == 0){
        result += "0";
    } else {
        while(decimal > 0){
            result = to_string(decimal % 2) + result;
            decimal /= 2;
        }
    }
    return result + "db";
}