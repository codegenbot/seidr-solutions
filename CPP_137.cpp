Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("float")))
        return b;
    else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("int")))
        return a;
    else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("float"))) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return fb > fa ? b : fa == fb ? boost::any("None") : a;
    }
    else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("string"))) {
        float fa = boost::any_cast<float>(a);
        std::string sb = boost::any_cast<std::string>(b);
        return stof(sb) > fa ? b : fa == stof(sb) ? boost::any("None") : a;
    }
    else if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("string"))) {
        int fa = boost::any_cast<int>(a);
        std::string sb = boost::any_cast<std::string>(b);
        return stof(sb) > fa ? b : fa == stof(sb) ? boost::any("None") : a;
    }
    else if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("float")))
        return b;
    else {
        int fa = boost::any_cast<int>(a);
        float fb = boost::any_cast<float>(b);
        return fb > fa ? b : fa == fb ? boost::any("None") : a;
    }
}