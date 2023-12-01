boost::any compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        int val1 = boost::any_cast<int>(a);
        int val2 = boost::any_cast<int>(b);
        if(val1 > val2){
            return val1;
        } else if(val1 < val2){
            return val2;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        float val1 = boost::any_cast<float>(a);
        float val2 = boost::any_cast<float>(b);
        if(val1 > val2){
            return val1;
        } else if(val1 < val2){
            return val2;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string val1 = boost::any_cast<string>(a);
        string val2 = boost::any_cast<string>(b);
        if(val1 > val2){
            return val1;
        } else if(val1 < val2){
            return val2;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(int) && b.type() == typeid(string)){
        int val1 = boost::any_cast<int>(a);
        string val2 = boost::any_cast<string>(b);
        return val2;
    } else if(a.type() == typeid(string) && b.type() == typeid(int)){
        string val1 = boost::any_cast<string>(a);
        int val2 = boost::any_cast<int>(b);
        return val1;
    } else if(a.type() == typeid(float) && b.type() == typeid(string)){
        float val1 = boost::any_cast<float>(a);
        string val2 = boost::any_cast<string>(b);
        return val2;
    } else if(a.type() == typeid(string) && b.type() == typeid(float)){
        string val1 = boost::any_cast<string>(a);
        float val2 = boost::any_cast<float>(b);
        return val1;
    }
    return "None";
}