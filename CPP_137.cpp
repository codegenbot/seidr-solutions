using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string strA = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string strB = any_cast<string>(b);
            return (stod(strB) > stod(strA)) ? b : ((stod(strB) < stod(strA)) ? a : boost::any("None"));
        } else {
            return (stod(any_cast<string>(b).c_str()) > stod(strA)) ? b : ((stod(any_cast<string>(b).c_str()) < stod(strA)) ? a : boost::any("None"));
        }
    } else if (is_any_of<float>(a)) {
        float fA = any_cast<float>(a);
        return (is_any_of<float>(b)) ? (fA > any_cast<float>(b) ? b : (fA < any_cast<float>(b) ? a : boost::any("None"))) : ((stod(any_cast<string>(b).c_str())) > fA) ? b : ((stod(any_cast<string>(b).c_str())) < fA) ? a : boost::any("None");
    } else {
        return (is_any_of<float>(b)) ? (any_cast<float>(a) > b ? b : (any_cast<float>(a) < b ? a : boost::any("None"))) : ((stod(any_cast<string>(b).c_str())) > any_cast<float>(a)) ? b : ((stod(any_cast<string>(b).c_str())) < any_cast<float>(a)) ? a : boost::any("None");
    }
}