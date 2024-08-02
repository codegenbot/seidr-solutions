#include <string>
#include <cassert>

bool simplify(std::string x, std::string n) {
    int x_num = std::stoi(x.substr(0, x.find("/")));
    int x_den = std::stoi(x.substr(x.find("/") + 1));
    int n_num = std::stoi(n.substr(0, n.find("/")));
    int n_den = std::stoi(n.substr(n.find("/") + 1));

    return (x_num * n_den) % (x_den * n_num) == 0;
}

int main() {
    assert(simplify("1/5", "1/5") == false);

    return 0;
}