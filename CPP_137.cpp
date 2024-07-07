if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
    return a;
else if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
    return a;
else if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
    return a;
else if (boost::any_cast<int>(a) == boost::any_cast<int>(b) &&
         boost::any_cast<float>(a) == boost::any_cast<float>(b) &&
         boost::any_cast<string>(a) == boost::any_cast<string>(b))
    return "None";
else
    return b;