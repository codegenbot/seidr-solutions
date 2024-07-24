#include <string>
#include <vector>

using namespace std;

bool valid_date(string date) {
    vector<string> tokens = split(date, '-');
    
    if (tokens.size() != 3)
        return false;
    
    int month = stoi(tokens[0]);
    int day = stoi(tokens[1]);
    int year = stoi(tokens[2]);
    
    if (month < 1 || month > 12)
        return false;
    
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
        return false;
    
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    
    if (month == 2) {
        if (day > 29)
            return false;
        else if (year % 4 != 0)
            return day > 28;
        else if (year % 100 != 0 || year % 400 == 0)
            return day > 29;
    }
    
    return true;
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    string token;
    for (char ch : str) {
        if (ch == c) {
            tokens.push_back(token);
            token = "";
        } else {
            token += ch;
        }
    }
    tokens.push_back(token);
    return tokens;
}