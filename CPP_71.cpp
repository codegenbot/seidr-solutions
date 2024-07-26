if(a + b > c && b + c > a && a + c > b){
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    return -1;
}