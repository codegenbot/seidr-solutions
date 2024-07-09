int x = boost::any_cast<int>(a);
string y = boost::any_cast<string>(b);
return (stof(y) > x) ? b : ((x > stof(y)) ? a : boost::any("None"));