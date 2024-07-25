if(a.index() == b.index()){
    if(a.index() == 0){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.index() == 1){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.index() == 2){
        string a_str = boost::any_cast<string>(a);
        string b_str = boost::any_cast<string>(b);
        float a_float = stof(a_str);
        float b_float = stof(b_str);
        if(a_float > b_float){
            return a_str;
        } else if(a_float < b_float){
            return b_str;
        } else {
            return "None";
        }
    }
}