#include <cassert>
#include <cstdio>
#include <string>

bool valid_date(const std::string& date) {
    if(date.length() != 7) return false;
    
    int month, year;
    if(sscanf(date.c_str(), "%d-%d", &month, &year) != 2) return false;
    
    if(month < 1 || month > 12) return false;
    
    return true;
}

int main() {
    assert(valid_date("04-2003") == true);
    return 0;
}