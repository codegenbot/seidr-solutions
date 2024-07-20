if (a.type() == typeid(int) && b.type() == typeid(int)){
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)){
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if ((a.type() == typeid(string) && b.type() == typeid(string)) || (a.type() == typeid(char*) && b.type() == typeid(char*))){
        float num_a = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
        float num_b = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
        return num_a > num_b ? a : b;
    } else {
        return "None";
    }
}