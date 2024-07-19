if (a.type() == typeid(int)) {
    if (b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (b.type() == typeid(float)) {
        if (boost::any_cast<int>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }
    } else {
        return a;
    }
} else if (a.type() == typeid(float)) {
    if (b.type() == typeid(int)) {
        if (boost::any_cast<float>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }
    } else {
        return a;
    }
} else {
    if (b.type() == typeid(int) || b.type() == typeid(float)) {
        return b;
    } else {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
            return a;
        } else if (boost::any_cast<string>(a) < boost::any_cast<string>(b)) {
            return b;
        } else {
            return "None";
        }
    }
}