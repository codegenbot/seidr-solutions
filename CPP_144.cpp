#include <sstream>
#include <string>
#include <cassert>

using namespace std;

bool simplify(string x, string n) {
    int x_num, x_den, n_num, n_den;
    char slash;

    stringstream x_stream(x);
    x_stream >> x_num >> slash >> x_den;

    stringstream n_stream(n);
    n_stream >> n_num >> slash >> n_den;

    int result_num = x_num * n_num;
    int result_den = x_den * n_den;

    if (result_den == 0) return false;
    
    return result_num % result_den == 0;
}

int main() {
    assert(simplify("1/5", "1/5") == false);
    assert(simplify("2/5", "5/2") == true);
    assert(simplify("0/1", "1/1") == true);
    assert(simplify("1/0", "1/1") == false);

    return 0;
}