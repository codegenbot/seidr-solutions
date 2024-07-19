if(a.index() == 0 && b.index() == 0)
    return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : "None");
else if(a.index() == 1 && b.index() == 1)
    return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : (boost::any_cast<float>(a) < boost::any_cast<float>(b) ? b : "None");
else if(a.index() == 2 && b.index() == 2)
    return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : (boost::any_cast<string>(a) < boost::any_cast<string>(b) ? b : "None");
else if(a.index() == 0 && b.index() == 1)
    return boost::any_cast<int>(a) > boost::any_cast<float>(b) ? a : (boost::any_cast<int>(a) < boost::any_cast<float>(b) ? b : "None");
else if(a.index() == 1 && b.index() == 0)
    return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : (boost::any_cast<float>(a) < boost::any_cast<int>(b) ? b : "None");
else if((a.index() == 0 && b.index() == 2) || (a.index() == 1 && b.index() == 2))
    return to_string(boost::any_cast<float>(a)) > boost::any_cast<string>(b) ? a : ("None");
else if((a.index() == 2 && b.index() == 0) || (a.index() == 2 && b.index() == 1))
    return boost::any_cast<string>(a) > to_string(boost::any_cast<float>(b)) ? a : ("None");
}