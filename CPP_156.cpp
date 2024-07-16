string int_to_mini_romank(int number){
    vector<int> integers = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    vector<string> romans = {"i","iv","v","ix","x","xl","l","xc","c","cd","d","cm","m"};
    string result = "";
    int i = 12;

    while (number > 0) {
        int div = number / integers[i];
        number %= integers[i];
        while (div--) {
            result += romans[i];
        }
        i--;
    }
    return result;
}