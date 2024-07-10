#include <string>

using namespace std;

int closest_integer(const char* value) {
    std::string strValue = value;
    double num = stod(strValue);
    return (num >= 0) ? ceil(num) : floor(num);
}