boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::get<int>(a) > std::get<float>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)std::get<int>(b) > (float)std::get<int>(a) ? b : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return std::string(std::get<string>(a)).compare(std::get<string>(b)) > 0 ? a : (std::get<string>(a).compare(std::get<string>(b)) < 0 ? b : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return std::stoi(std::get<string>(b)) > (int)std::get<int>(a) ? b : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (int)std::get<int>(a) > std::stoi(std::get<string>(b)) ? a : "None";
    }
}