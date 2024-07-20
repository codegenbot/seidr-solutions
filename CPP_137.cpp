if(a.type() == boost::any::typeless_type || a.type() == boost::any::integer_type){
    if(b.type() == boost::any::typeless_type || b.type() == boost::any::integer_type){
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if(x > y) return a;
        else if(x < y) return b;
        else return "None";
    } else {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if(x > y) return a;
        else if(x < y) return b;
        else return "None";
    }
} else {
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if(x > y) return a;
    else if(x < y) return b;
    else return "None";
}