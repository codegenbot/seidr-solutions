#include <cassert>
#include <string>

bool valid_date(const std::string& date_str) {
    if(date_str.size() != 7 || date_str[2] != '-') return false;
    
    int month = std::stoi(date_str.substr(0, 2));
    int year = std::stoi(date_str.substr(3, 4));
    
    if(month < 1 || month > 12) return false;
    
    int day_max = (month == 2) ? 29 : ((month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31);
    int day = std::stoi(date_str.substr(3, 4));
    if(day < 1 || day > day_max) return false;
    
    return true;
}

int main() {
    assert(valid_date("04-2003") == false);
    return 0;
}