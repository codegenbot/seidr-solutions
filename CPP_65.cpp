#include <string>

string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    shift = shift % num_str.size();
    if (shift == 0) {
        return num_str;
    }
    string shifted_num = num_str.substr(num_str.size() - shift) + num_str.substr(0, num_str.size() - shift);
    return shifted_num;
}