if (a.type() == boost::any::typeclass<float> ||
    a.type() == boost::any::typeclass<double>) {
    if (b.type() == boost::any::typeclass<float> ||
        b.type() == boost::any::typeclass<double>) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        if (fa > fb) {
            return a;
        } else if (fb > fa) {
            return b;
        } else {
            return "None";
        }
    } else if (b.type() == boost::any::typeclass<std::string>) {
        std::string fs = boost::any_cast<std::string>(b);
        float fa = boost::any_cast<float>(a);
        if (fa > std::stof(fs)) {
            return a;
        } else if (std::stof(fs) > fa) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
} else if (a.type() == boost::any::typeclass<std::string>) {
    if (b.type() == boost::any::typeclass<float> ||
        b.type() == boost::any::typeclass<double>) {
        float fb = boost::any_cast<float>(b);
        std::string fs = boost::any_cast<std::string>(a);
        if (std::stof(fs) > fb) {
            return a;
        } else if (fb > std::stof(fs)) {
            return b;
        } else {
            return "None";
        }
    } else if (b.type() == boost::any::typeclass<std::string>) {
        std::string fs = boost::any_cast<std::string>(a);
        std::string fb = boost::any_cast<std::string>(b);
        if (fs > fb) {
            return a;
        } else if (fb > fs) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
} else {
    return "None";
}