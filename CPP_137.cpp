#include <any>
#include <string>

using namespace std;

int compare_one(const string& s, int i) {
    if (i == 1)
        return stof(s) - 10;
    else if (i == 2)
        return stof(s);
    else if (i == 3)
        return stof(s) + 10;
}

int main() {
    string a, b;
    cin >> a >> b;
    if (a.size() > 0 && b.size() > 0) {
        int x = compare_one(a, 1);
        int y = compare_one(b, 2);
        return (x < y) ? -1 : ((y < x) ? 1 : 0);
    }
    
    assert (compare_one("1", 1) == 0);
}