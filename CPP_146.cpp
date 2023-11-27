int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.size() - 1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({1, 2, 3}) == 0);
    assert(specialFilter({12, 23, 34}) == 0);
    assert(specialFilter({11, 22, 33}) == 0);
    assert(specialFilter({13, 24, 35}) == 0);
    assert(specialFilter({15, 26, 37}) == 0);
    assert(specialFilter({2, 13, 24}) == 1);
    assert(specialFilter({22, 33, 44}) == 3);
    
    return 0;
}