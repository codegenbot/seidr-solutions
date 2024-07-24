if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
    return b;
else if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
    return a;
else
    return "None";