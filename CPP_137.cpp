boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num_b = boost::any_cast<int>(b);
        return boost::any_cast<std::string>(a).size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double num_a = boost::any_cast<double>(a);
        return boost::any_cast<std::string>(b).size() > std::to_string(num_a).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int num_b = boost::any_cast<int>(b);
        return boost::any_cast<std::string>(a).size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double num_b = boost::any_cast<double>(b);
        return boost::any_cast<std::string>(a).size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(a).size() > boost::any_cast<std::string>(b).size() ? a : b;
    }
    else if (a.convert_to(b) || 
             boost::any_cast<std::string>(a) == "None" && 
             (a.type() != typeid(std::string) || boost::any_cast<std::string>(a) != "None")) {
        return "None";
    }
    return a > b ? a : b;
}