#include <cstdio>

bool valid_date(const int& date) {
    if(date <= 0) return false;
    
    int month, day, year;
    if(sscanf(std::to_string(date).c_str(), "%d-%d-%d", &month, &day, &year) != 3) return false;
    
    if(month < 1 || month > 12) return false;
    
    if(month == 2 && (day < 1 || day > 29)) return false;
    if((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) return false;
    if(day < 1 || day > 31) return false;
    
    return true;
}

int main() {
    assert(valid_date(42003) == false);
    return 0;
}