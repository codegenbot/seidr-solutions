[PYTHON]
#include <boost/any.hpp>
#include <string>
#include <cassert>

std::string compare_one(boost::any a, boost::any b) {
    if (a.index() == 0) {
        int x = get<0>(a);
        if (b.index() == 1) {
            float y = get<1>(b);
            return to_string((x > y) ? a : b);
        } else if (b.index() == 2) {
            std::string s = get<2>(b);
            try {
                float y = stof(s);
                return to_string((x > y) ? a : b);
            } catch (std::invalid_argument& e) {
                return "None";
            }
        } else {
            return "None";
        }
    } else if (a.index() == 1) {
        float x = get<1>(a);
        if (b.index() == 0) {
            int y = get<0>(b);
            return to_string((x > y) ? a : b);
        } else if (b.index() == 2) {
            std::string s = get<2>(b);
            try {
                float y = stof(s);
                return to_string((x > y) ? a : b);
            } catch (std::invalid_argument& e) {
                return "None";
            }
        } else {
            return "None";
        }
    } else if (a.index() == 2) {
        std::string s = get<2>(a);
        try {
            float x = stof(s);
            if (b.index() == 0) {
                int y = get<0>(b);
                return to_string((x > y) ? a : b);
            } else if (b.index() == 1) {
                float y = get<1>(b);
                return to_string((x > y) ? a : b);
            } else {
                return "None";
            }
        } catch (std::invalid_argument& e) {
            return "None";
        }
    } else {
        return "None";
    }
}
[/PYTHON]
[TESTS]
# Test case 1:
BOOST_ASSERT(compare_one(boost::any(10), boost::any(2.5)) == "2.5")
# Test case 2:
BOOST_ASSERT(compare_one(boost::any(2.5), boost::any(10)) == "10")
# Test case 3:
BOOST_ASSERT(compare_one(boost::any("hello"), boost::any("world")) == "world")
[/TESTS]
```