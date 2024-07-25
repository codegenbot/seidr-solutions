```cpp
#include <any>
#include <string>

std::string compare_one(const std::string& s, int i);

int main() {
    string str;
    int x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    a = any(x);
    b = any(y);

    if (any_cast<int>(a) > any_cast<int>(b)) {
        return any_cast<string>(a) + " is greater";
    } else if (any_cast<int>(a) < any_cast<int>(b)) {
        return any_cast<string>(b) + " is greater";
    } else {
        return "Both numbers are equal";
    }
}

std::string compare_one(const std::string& s, int i) {
    // Code here...
}