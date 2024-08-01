#include<string>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    return (num >= 0) ? round(num + 0.5) : round(num - 0.5);
}