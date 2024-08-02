```
#include <any>
#include <string>
#include <vector>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<double>(a) && holds_alternative<double>(b)) {
        return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) == get<double>(b))) ? "None" : b;
    } else if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        return (stoi(get<string>(a).c_str()) > stoi(get<string>(b).c_str())) ? a : ((stoi(get<string>(a).c_str()) == stoi(get<string>(b).c_str()))) ? "None" : b;
    } else {
        return "Invalid input type";
    }
}