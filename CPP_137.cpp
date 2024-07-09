#include <variant>
#include <string>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternative<string>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        int val1 = get<int>(a), val2 = get<string>(b);
        return val1 > 0 ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<double>(b)) || (holds_alternation<string>(a) && holds_alternation<float>(b))) {
        string strA = get<string>(a), val2 = get<double>(b);
        return stod(strA) > val2 ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<double>(b)) || (holds_alternation<int>(a) && holds_alternation<float>(b))) {
        int val1 = get<int>(a), val2 = get<double>(b);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<string>(b)) || (holds_alternation<int>(a) && holds_alternation<string>(b))) {
        int val1 = get<int>(a), strB = get<string>(b);
        return stoi(strB) > val1 ? b : a;
    }
    else if ((holds_alternation<double>(a) && holds_alternation<int>(b)) || (holds_alternation<double>(a) && holds_alternation<int>(b))) {
        double val1 = get<double>(a), val2 = get<int>(b);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<double>(a) && holds_alternation<string>(b)) || (holds_alternation<double>(a) && holds_alternation<string>(b))) {
        double val1 = get<double>(a), strB = get<string>(b);
        return stod(strB) > val1 ? b : a;
    }
    else if ((holds_alternation<float>(a) && holds_alternation<int>(b)) || (holds_alternation<float>(a) && holds_alternation<int>(b))) {
        float val1 = get<float>(a), val2 = get<int>(b);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<float>(a) && holds_alternation<string>(b)) || (holds_alternation<float>(a) && holds_alternation<string>(b))) {
        float val1 = get<float>(a), strB = get<string>(b);
        return stof(strB) > val1 ? b : a;
    }
    
    // handle any other type of variants
    else {
        return a;  // or any other logic you need
    }
}

int main() {
    // test the function
    cout << boost::any_cast<string>(compare_one(string("1"), 1)) << endl;
    return 0;
}