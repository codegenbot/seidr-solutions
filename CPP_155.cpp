int digit;
vector<int> counts(2,0);
while(num!=0){
    digit = abs(num % 10);
    if(digit % 2 == 0){
        counts[0]++;
    } else {
        counts[1]++;
    }
    num = num / 10;
}
return counts;