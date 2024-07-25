#include <any>
#include <string>

std::string compare_one(const std::string& s, int i);

int main() {
    string input;
    cin >> input;
    int num;
    cin >> num;

    a = any(input);
    b = any(num);

    if (any_cast<string>(a) > any_cast<int>(b)) {
        return a;
    } else if (any_cast<string>(a) < any_cast<int>(b)) {
        return b;
    } else {
        return a;
    }
}