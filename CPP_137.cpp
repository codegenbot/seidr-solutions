std::any a;
std::any b;

namespace std {

    bool compare_one(const std::any& x, const std::any& y) {
        if (x.type() == typeid(int) && y.type() == typeid(int)) {
            int xx = boost::any_cast<int>(x);
            int yy = boost::any_cast<int>(y);
            if (xx > yy) return true;
            else if (xx < yy) return false;
            else return true;
        } else if (x.type() == typeid(double) && y.type() == typeid(double)) {
            double xx = boost::any_cast<double>(x);
            double yy = boost::any_cast<double>(y);
            if (xx > yy) return true;
            else if (xx < yy) return false;
            else return true;
        } else if ((x.type() == typeid(std::string) || x.type() == typeid(std::wstring)) &&
                   (y.type() == typeid(std::string) || y.type() == typeid(std::wstring))) {
            std::string xx = boost::any_cast<std::string>(x);
            std::string yy = boost::any_cast<std::string>(y);
            if (xx > yy) return true;
            else if (xx < yy) return false;
            else return true;
        } else if ((x.type() == typeid(std::string) || x.type() == typeid(std::wstring)) &&
                   (y.type() == typeid(double))) {
            std::string xx = boost::any_cast<std::string>(x);
            double yy = boost::any_cast<double>(y);
            if (std::stod(xx) > yy) return true;
            else if (std::stod(xx) < yy) return false;
            else return true;
        } else if ((x.type() == typeid(double)) &&
                   (y.type() == typeid(std::string) || y.type() == typeid(std::wstring))) {
            double xx = boost::any_cast<double>(x);
            std::string yy = boost::any_cast<std::string>(y);
            if (xx > std::stod(yy)) return true;
            else if (xx < std::stod(yy)) return false;
            else return true;
        } else {
            return true;
        }
    }

}