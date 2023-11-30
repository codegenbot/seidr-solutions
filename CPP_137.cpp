boost::any compare_one(boost::any a, boost::any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)){
        int val1 = boost::any_cast<int>(a);
        int val2 = boost::any_cast<int>(b);
        if (val1 > val2){
            return a;
        } else if (val1 < val2){
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)){
        float val1 = boost::any_cast<float>(a);
        float val2 = boost::any_cast<float>(b);
        if (val1 > val2){
            return a;
        } else if (val1 < val2){
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)){
        string val1 = boost::any_cast<string>(a);
        string val2 = boost::any_cast<string>(b);
        if (val1 > val2){
            return a;
        } else if (val1 < val2){
            return b;
        } else {
            return "None";
        }
    } else if ((a.type() == typeid(int) && b.type() == typeid(float)) || 
               (a.type() == typeid(float) && b.type() == typeid(int))){
        float val1, val2;
        if (a.type() == typeid(int)){
            val1 = static_cast<float>(boost::any_cast<int>(a));
            val2 = boost::any_cast<float>(b);
        } else {
            val1 = boost::any_cast<float>(a);
            val2 = static_cast<float>(boost::any_cast<int>(b));
        }
        if (val1 > val2){
            return a;
        } else if (val1 < val2){
            return b;
        } else {
            return "None";
        }
    } else if ((a.type() == typeid(int) && b.type() == typeid(string)) ||
               (a.type() == typeid(string) && b.type() == typeid(int))){
        string val1, val2;
        if (a.type() == typeid(int)){
            val1 = to_string(boost::any_cast<int>(a));
            val2 = boost::any_cast<string>(b);
        } else {
            val1 = boost::any_cast<string>(a);
            val2 = to_string(boost::any_cast<int>(b));
        }
        if (val1 > val2){
            return a;
        } else if (val1 < val2){
            return b;
        } else {
            return "None";
        }
    } else if ((a.type() == typeid(float) && b.type() == typeid(string)) ||
               (a.type() == typeid(string) && b.type() == typeid(float))){
        string val1, val2;
        if (a.type() == typeid(float)){
            val1 = to_string(boost::any_cast<float>(a));
            val2 = boost::any_cast<string>(b);
        } else {
            val1 = boost::any_cast<string>(a);
            val2 = to_string(boost::any_cast<float>(b));
        }
        if (val1 > val2){
            return a;
        } else if (val1 < val2){
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}