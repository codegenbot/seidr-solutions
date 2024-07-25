if (a.type() == typeid(int)) {
        if (b.type() == typeid(int)) {
            return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : "None");
        } else if (b.type() == typeid(float)) {
            return boost::any_cast<int>(a) > boost::any_cast<float>(b) ? a : (boost::any_cast<int>(a) < boost::any_cast<float>(b) ? b : "None");
        } else if (b.type() == typeid(string)) {
            return boost::any_cast<int>(a) > std::stof(boost::any_cast<string>(b)) ? a : (boost::any_cast<int>(a) < std::stof(boost::any_cast<string>(b)) ? b : "None");
        }
    } else if (a.type() == typeid(float)) {
        if (b.type() == typeid(int)) {
            return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : (boost::any_cast<float>(a) < boost::any_cast<int>(b) ? b : "None");
        } else if (b.type() == typeid(float)) {
            return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : (boost::any_cast<float>(a) < boost::any_cast<float>(b) ? b : "None");
        } else if (b.type() == typeid(string)) {
            return boost::any_cast<float>(a) > std::stof(boost::any_cast<string>(b)) ? a : (boost::any_cast<float>(a) < std::stof(boost::any_cast<string>(b)) ? b : "None");
        }
    } else if (a.type() == typeid(string)) {
        if (b.type() == typeid(int)) {
            return std::stof(boost::any_cast<string>(a)) > boost::any_cast<int>(b) ? a : (std::stof(boost::any_cast<string>(a)) < boost::any_cast<int>(b) ? b : "None");
        } else if (b.type() == typeid(float)) {
            return std::stof(boost::any_cast<string>(a)) > boost::any_cast<float>(b) ? a : (std::stof(boost::any_cast<string>(a)) < boost::any_cast<float>(b) ? b : "None");
        } else if (b.type() == typeid(string)) {
            return std::stof(boost::any_cast<string>(a)) > std::stof(boost::any_cast<string>(b)) ? a : (std::stof(boost::any_cast<string>(a)) < std::stof(boost::any_cast<string>(b)) ? b : "None");
        }
    }
}