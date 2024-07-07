using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<int>(a)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : (bi > ai) ? b : boost::any("None");
    } else if (is_any_of<float>(a)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return (af > bf) ? a : (bf > af) ? b : boost::any("None");
    } else if (is_any_of<std::string>(a)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        if (stof(as) > stof(bs))
            return a;
        else if (stof(bs) > stof(as))
            return b;
        else
            return boost::any("None");
    }
    return boost::any();
}