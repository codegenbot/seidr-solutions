#include <iostream>
#include <string>
#include <algorithm>
#include <variant>
using namespace std;

variant<int, float, string> compare_one(variant<int, float, string> a, variant<int, float, string> b) {
    if (a.index() == 0) {
        int x = get<0>(a);
        if (b.index() == 1) {
            float y = get<1>(b);
            return (x > y) ? a : b;
        } else if (b.index() == 2) {
            string s = get<2>(b);
            try {
                float y = stof(s);
                return (x > y) ? a : b;
            } catch (const invalid_argument& e) {
                return "None";
            }
        } else {
            return "None";
        }
    } else if (a.index() == 1) {
        float x = get<1>(a);
        if (b.index() == 0) {
            int y = get<0>(b);
            return (x > y) ? a : b;
        } else if (b.index() == 2) {
            string s = get<2>(b);
            try {
                float y = stof(s);
                return (x > y) ? a : b;
            } catch (const invalid_argument& e) {
                return "None";
            }
        } else {
            return "None";
        }
    } else if (a.index() == 2) {
        string s = get<2>(a);
        try {
            float x = stof(s);
            if (b.index() == 0) {
                int y = get<0>(b);
                return (x > y) ? a : b;
            } else if (b.index() == 1) {
                float y = get<1>(b);
                return (x > y) ? a : b;
            } else {
                return "None";
            }
        } catch (const invalid_argument& e) {
            return "None";
        }
    } else {
        return "None";
    }
}
```