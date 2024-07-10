```cpp
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cstring>
#include <cstdlib>
#include <cmath>

long long eval(const char *p) {
    return eval(p, 0);
}

long long eval(const char *p, long long y) {
    while (*p) {
        if (isdigit(*p)) {
            p++;
            continue;
        }
        if (*p == ' ') {
            p++;
            continue;
        }
        if (*p == '+') {
            p++;
            if (*p == 'y') {
                y++;
                p += 2;
                continue;
            }
            p++;
            continue;
        }
        if (*p == '-') {
            p++;
            if (*p == 'y') {
                y--;
                p += 2;
                continue;
            }
            p++;
            continue;
        }
        if (*p == '*') {
            p++;
            while (isdigit(*p)) {
                p++;
            }
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            y *= x;
            p += std::strlen(p);
            continue;
        }
        if (*p == '/') {
            p++;
            while (isdigit(*p)) {
                p++;
            }
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            if (x != 0)
                y /= x;
            else
                return std::numeric_limits<long long>::max();
            p += std::strlen(p);
            continue;
        }
        if (*p == '^') {
            p++;
            while (isdigit(*p)) {
                p++;
            }
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            y = std::pow(y, x);
            p += std::strlen(p);
            continue;
        }
    }
    return y;
}