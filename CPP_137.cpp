#include <any>
#include <string>
#include <algorithm>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<int>(a) > any_cast<float>(any_cast<any>(b)))) {
        return move(b);
    }
    else if (any_cast<int>(a) > stoi(any_cast<string>(b))) {
        return move(b);
    }
    else if (stoi(any_cast<string>(a)) > any_cast<int>(b)) {
        return move(a);
    }
    else if (stoi(any_cast<string>(a)) > any_cast<float>(any_cast<any>(b)))) {
        return move(b);
    }
    else if (any_cast<string>(a) > any_cast<string>(b)) {
        return move(b);
    }
    else {
        return "None";
    }
}