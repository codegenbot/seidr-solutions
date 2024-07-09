#include <variant>
#include <string>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    if ((holds_alternative<int>(a) && holds_alternative<string>(b)) || (holds_alternation<int>(a) && holds_alternative<string>(b))) {
        int valA = get<int>(a);
        string strB = get<string>(b);
        return valA > stol(strB) ? a : b;
    }
    if ((holds_alternative<string>(a) && holds_alternative<int>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        string strA = get<string>(a);
        int valB = get<int>(b);
        return stol(strA) > to_string(valB).c_str() ? a : b;
    }
    if ((holds_alternative<int>(a) && holds_alternation<int>(b)) || (holds_alternation<int>(a) && holds_alternation<int>(b))) {
        int valA = get<int>(a);
        int valB = get<int>(b);
        return valA > valB ? a : b;
    }
    if ((holds_alternation<double>(a) && holds_alternation<float>(b)) || (holds_alternation<double>(a) && holds_alternation<float>(b))) {
        double valA = get<double>(a);
        float valB = get<float>(b);
        return valA > valB ? a : b;
    }
    if ((holds_alternation<float>(a) && holds_alternation<double>(b)) || (holds_alternation<float>(a) && holds_alternation<double>(b))) {
        float valA = get<float>(a);
        double valB = get<double>(b);
        return valA > valB ? a : b;
    }
}

int main() {
    variant<string, int, double, float> result = compare_one(variant<string>("Hello"), variant<string>("World"));
    if (holds_alternative<string>(result)) {
        cout << "The larger value is: " << get<string>(result) << endl;
    } else {
        cout << "The larger value is: " << get<int>(result) << endl;
    }
    return 0;
}