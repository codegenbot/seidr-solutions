```cpp
#include <boost/any.hpp>
#include <string>

using boost::any;

any compare_one(any a, any b) {
    if (a.type() == typeid(int)) {
        int ia = boost::any_cast<int>(a);
        if (b.type() == typeid(float)) {
            float ib = boost::any_cast<float>(b);
            return (float)ia < ib ? &b : &a;
        }
        else if (b.type() == typeid(double)) {
            double ib = boost::any_cast<double>(b);
            return (double)ia < ib ? &b : &a;
        }
        else if (b.type() == typeid(std::string)) {
            std::string ib = boost::any_cast<std::string>(b);
            if ((int)ia > std::stof(ib)) {
                return a;
            }
            else if ((int)ia < std::stof(ib)) {
                return b;
            }
           	else {
                return b;
            }
        }
    }
    else if (a.type() == typeid(float)) {
        float ia = boost::any_cast<float>(a);
        if (b.type() == typeid(int)) {
            int ib = boost::any_cast<int>(b);
            return (float)ia > ib ? &a : &b;
        }
       	else if (b.type() == typeid(double)) {
            double ib = boost::any_cast<double>(b);
            return (double)ia > ib ? &a : &b;
        }
		else if (b.type() == typeid(std::string)) {
            std::string ib = boost::any_cast<std::string>(b);
			if (std::stof(ib) < (float)ia) {
                return a;
            }
			else if (std::stof(ib) > (float)ia) {
                return b;
            }
			else {
				return b;
			}
        }
    }
    else if (a.type() == typeid(std::string)) {
        std::string ia = boost::any_cast<std::string>(a);
        if (b.type() == typeid(float)) {
            float ib = boost::any_cast<float>(b);
			if (std::stof(ia) < ib) {
                return a;
            }
			else if (std::stof(ia) > ib) {
                return b;
            }
			else {
				return b;
			}
        }
		else if (b.type() == typeid(double)) {
            double ib = boost::any_cast<double>(b);
			if (std::stof(ia) < ib) {
                return a;
            }
			else if (std::stof(ia) > ib) {
                return b;
            }
			else {
				return b;
			}
        }
		else if (b.type() == typeid(std::string)) {
			if (std::stof(ia) < std::stof(boost::any_cast<std::string>(b))) {
                return a;
            }
			else if (std::stof(ia) > std::stof(boost::any_cast<std::string>(b))) {
                return b;
            }
			else {
				return b;
			}
        }
    }
	return boost::any();
}