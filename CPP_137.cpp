if(a == b) {
        return "None";
    }
    
    if(a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    }
    
    if(a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
    }
    
    if(a.type() == typeid(string) && b.type() == typeid(string)) {
        float num_a, num_b;
        if(a.contains(".") || a.contains(",")) {
            replace(a.begin(), a.end(), ',', '.');
            num_a = stof(a);
        } else {
            num_a = stof(a);
        }
        
        if(b.contains(".") || b.contains(",")) {
            replace(b.begin(), b.end(), ',', '.');
            num_b = stof(b);
        } else {
            num_b = stof(b);
        }
        
        return (num_a > num_b) ? a : b;
    }
    
    if((a.type() == typeid(int) && b.type() == typeid(float)) || (a.type() == typeid(float) && b.type() == typeid(int))) {
        return (stof(to_string(boost::any_cast<float>(a))) > stof(to_string(boost::any_cast<float>(b)))) ? a : b;
    }
    
    return "None";
}