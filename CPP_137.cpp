if(a.type() == boost::any::typeless_type || a.type() == typeid(int) || a.type() == typeid(float)) {
    if(b.type() == boost::any::typeless_type || b.type() == typeid(int) || b.type() == typeid(float)) {
        boost::any max;
        if(a.convert_to(max) && b.convert_to(max)) {
            return max;
        } else if(a.convert_to(max)) {
            return max;
        } else if(b.convert_to(max)) {
            return max;
        }
    } else {
        string a_str = a.convert_to<string>();
        string b_str = b.convert_to<string>();
        if(a_str.size() > 0 && (a_str[0] == '.' || a_str[0] == ',')) {
            a_str = a_str.substr(1);
        }
        if(b_str.size() > 0 && (b_str[0] == '.' || b_str[0] == ',')) {
            b_str = b_str.substr(1);
        }
        if(stof(a_str) > stof(b_str)) {
            return a;
        } else if(stof(b_str) > stof(a_str)) {
            return b;
        } else {
            return "None";
        }
    }
} else {
    string a_str = a.convert_to<string>();
    string b_str = b.convert_to<string>();
    if(stof(a_str) > stof(b_str)) {
        return a;
    } else if(stof(b_str) > stof(a_str)) {
        return b;
    } else {
        return "None";
    }
}