#include <any>
#include <boost/any.hpp>

namespace std {
    namespace {
        any compare(any a, any b) {
            if (a.type() == typeid(int) && b.type() == typeid(int)) {
                int x = boost::any_cast<int>(a);
                int y = boost::any_cast<int>(b);
                return x > y ? a : b;
            } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
                double x = boost::any_cast<double>(a);
                double y = boost::any_cast<double>(b);
                return x > y ? a : b;
            } else if ((a.type() == typeid(std::string) || a.type() == typeid(boost::any)) &&
                       (b.type() == typeid(std::string) || b.type() == typeid(boost::any))) {
                std::string x = boost::any_cast<std::string>(a);
                std::string y = boost::any_cast<std::string>(b);
                return x > y ? a : b;
            } else if ((a.type() == typeid(std::string) || a.type() == typeid(boost::any)) &&
                       (b.type() == typeid(double))) {
                std::string x = boost::any_cast<std::string>(a);
                double y = boost::any_cast<double>(b);
                return std::stod(x) > y ? a : b;
            } else if ((a.type() == typeid(double)) &&
                       (b.type() == typeid(std::string) || b.type() == typeid(boost::any))) {
                double x = boost::any_cast<double>(a);
                std::string y = boost::any_cast<std::string>(b);
                return x > std::stod(y) ? a : b;
            } else {
                return a;
            }
        }
    }

    any big_or_equal(any a, any b) {
        if (a.type() == typeid(int) && b.type() == typeid(int)) {
            int x = boost::any_cast<int>(a);
            int y = boost::any_cast<int>(b);
            return a.type() != typeid(int) || b.type() != typeid(int) ? a : (x > y ? a : b);
        } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
            double x = boost::any_cast<double>(a);
            double y = boost::any_cast<double>(b);
            return a.type() != typeid(double) || b.type() != typeid(double) ? a : (x > y ? a : b);
        } else if ((a.type() == typeid(std::string) || a.type() == typeid(boost::any)) &&
                   (b.type() == typeid(std::string) || b.type() == typeid(boost::any))) {
            std::string x = boost::any_cast<std::string>(a);
            std::string y = boost::any_cast<std::string>(b);
            return a.type() != typeid(std::string) || b.type() != typeid(std::string) ? a : (x > y ? a : b);
        } else {
            return a;
        }
    }

    int main(int argc, const char* argv[]) {
        // Your code here
    }
}