```cpp
#include <iostream>
#include<string>
#include<algorithm>
#include<variant>

using namespace std;

variant<int, string> compare_one(variant<int|string> a, variant<int|string> b) {
    if (a.index() == 0 && b.index() == 1) {
        int da = get<int>(a);
        string db = get<string>(b);
        return da > stod(db) ? a : b;
    }
    else if (a.index() == 1 && b.index() == 0) {
        int da = get<int>(b);
        string db = get<string>(a);
        return stod(db) > da ? a : b;
    }
    else if (a.index() == 1 && b.index() == 1) {
        string da = get<string>(a);
        string db = get<string>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return std::monostate{};
    }
    else if (a.index() == 0 && b.index() == 0) {
        int da = get<int>(a);
        int db = get<int>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return std::monostate{};
    }
    return std::monostate{};
}

int main() {
    cout << get<variant<int, string>>(compare_one(1, 2.5)) << endl;
    cout << get<variant<int, string>>(compare_one(1, "2,3")) << endl;
    cout << get<variant<int, string>>(compare_one("5,1", "6")) << endl;
    cout << get<variant<int, string>>(compare_one("1", 1)) << endl;
    return 0;
}