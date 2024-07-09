#include <string>
#include <cmath>
#include <any>

using namespace std;

any compareOne(any a, any b) {
    if (a.type() == b.type()) {
        if (any_cast<string>(a) > any_cast<string>(b)) return a;
        else if (any_cast<string>(b) > any_cast<string>(a)) return b;
        else if (any_cast<int>(a) > any_cast<int>(b)) return a;
        else if (any_cast<int>(b) > any_cast<int>(a)) return b;
        else if (any_cast<float>(a) > any_cast<float>(b)) return a;
        else if (any_cast<float>(b) > any_cast<float>(a)) return b;
    }
    else if (is_same_v<any_cast<string>(a), "int"> && is_same_v<any_cast<string>(b), "float">) {
        return (stof(any_cast<string>(a).c_str()) > any_cast<float>(b)) ? a : ((any_cast<float>(b) > stof(any_cast<string>(a).c_str())) ? b : any(typeid(void)));
    }
    else if (is_same_v<any_cast<string>(a), "int"> && is_same_v<any_cast<string>(b), "string">) {
        return (stoi(any_cast<string>(a).c_str()) > stoi(any_cast<string>(b).c_str())) ? a : ((stoi(any_cast<string>(b).c_str()) > stoi(any_cast<string>(a).c_str())) ? b : any(typeid(void)));
    }
    else if (is_same_v<any_cast<string>(a), "float"> && is_same_v<any_cast<string>(b), "string">) {
        return (stof(any_cast<string>(a).c_str()) > stod(any_cast<string>(b).c_str())) ? a : ((stod(any_cast<string>(b).c_str()) > stof(any_cast<string>(a).c_str())) ? b : any(typeid(void)));
    }
    else {
        return any(typeid(void));
    }
}