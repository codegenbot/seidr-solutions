if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    else return "None";
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
    else return "None";
}
else if(a.type() == typeid(string) && b.type() == typeid(string)){
    float fa, fb;
    if(((string)boost::any_cast<string>(a)).find(",") != string::npos){
        ((string)boost::any_cast<string>(a)).replace(((string)boost::any_cast<string>(a)).find(","), 1, ".");
        fa = stof(boost::any_cast<string>(a));
    }
    else fa = stof(boost::any_cast<string>(a));
    
    if(((string)boost::any_cast<string>(b)).find(",") != string::npos){
        ((string)boost::any_cast<string>(b)).replace(((string)boost::any_cast<string>(b)).find(","), 1, ".");
        fb = stof(boost::any_cast<string>(b));
    }
    else fb = stof(boost::any_cast<string>(b));
    
    if(fa > fb) return a;
    else if(fa < fb) return b;
    else return "None";
}
else return "None";