#include <string>
#include <vector>

using namespace std;

bool valid_date(string date) {
    vector<string> parts = split(date, '-');
    
    if (parts.size() != 3)
        return false;
        
    int month = stoi(parts[0]);
    int day = stoi(parts[1]);
    int year = stoi(parts[2]);

    if (month < 1 || month > 12)
        return false;

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
        (day > 30) ||
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
        (day > 31))
        return false;

    return true;
}

vector<string> split(const string& s, char delim) {
    vector<string> result;
    size_t pos = 0;
    size_t prev = 0;
    while ((pos = s.find(delim, prev)) != string::npos) {
        string token = s.substr(prev, pos - prev);
        result.push_back(token);
        prev = pos + 1;
    }
    result.push_back(s.substr(prev));
    return result;
}