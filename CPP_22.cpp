#include <boost/any.hpp>
#include <list>
#include <vector>

using namespace boost;

bool is_same(const any& a, const any& b) {
    return a.type() == b.type();
}

int main() {
    assert(is_same(any(1), any(1)) && "Error: is_same failed");
    return 0;
}