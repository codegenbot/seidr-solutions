#include<string>

double stod(const string& s) {
    return stol(s);
}

int closest_integer(string value){
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) < abs(num - (integerPart + 1)))
        return integerPart;
    else
        return integerPart + 1;
}