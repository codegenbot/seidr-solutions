boost::any compare_one(boost::any a, boost::any b){
    if (a.type() == typeid(int)) {
        if (b.type() == typeid(int)) {
            if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
                return a;
            } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
                return b;
            }
        } else if (b.type() == typeid(float)) {
            if (boost::any_cast<int>(a) > boost::any_cast<float>(b)) {
                return a;
            } else if (boost::any_cast<int>(a) < boost::any_cast<float>(b)) {
                return b;
            }
        } else if (b.type() == typeid(string)) {
            return b;
        }
    } else if (a.type() == typeid(float)) {
        if (b.type() == typeid(int)) {
            if (boost::any_cast<float>(a) > boost::any_cast<int>(b)) {
                return a;
            } else if (boost::any_cast<float>(a) < boost::any_cast<int>(b)) {
                return b;
            }
        } else if (b.type() == typeid(float)) {
            if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
                return a;
            } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
                return b;
            }
        } else if (b.type() == typeid(string)) {
            return b;
        }
    } else if (a.type() == typeid(string)) {
        if (b.type() == typeid(int)) {
            return a;
        } else if (b.type() == typeid(float)) {
            return a;
        } else if (b.type() == typeid(string)) {
            if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
                return a;
            } else if (boost::any_cast<string>(a) < boost::any_cast<string>(b)) {
                return b;
            }
        }
    }
    return "None";
}