#include <boost/any.hpp>
#include <string>

int main() {
    assert(boost::any_cast<std::string>(compare_one("1", 1)) == "None");
}
```