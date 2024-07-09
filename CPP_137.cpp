```cpp
#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    float num1 = stof(a);
    float num2 = stof(b);

    if(num1 > num2)
        return a;
    else if(num1 < num2)
        return b;
    else
        return "None";
}

int main() {
    cout << compare_one("123.45", "234.56") << endl;
    return 0;
}