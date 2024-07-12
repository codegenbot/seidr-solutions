if(a == b) return "None";
    
    if(a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if(a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(boost::any_cast<float>(a), boost::any_cast<float>(b));
    } else {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        float num_a = stof(str_a);
        float num_b = stof(str_b);
        return max(num_a, num_b);
    }
}