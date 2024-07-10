using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string strA = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string strB = any_cast<string>(b);
            return is_greater(strA, strB) ? a : (is_greater(strB, strA) ? b : boost::any("None"));
        } else {
            double numB = any_cast<double>(b);
            return is_greater(strA, to_string(numB)) ? a : (is_greater(to_string(numB), strA) ? b : boost::any("None"));
        }
    } else {
        double numA = any_cast<double>(a);
        if (is_any_of<string>(b)) {
            string strB = any_cast<string>(b);
            return is_greater(to_string(numA), strB) ? a : (is_greater(strB, to_string(numA)) ? b : boost::any("None"));
        } else {
            double numB = any_cast<double>(b);
            return (numA > numB) ? a : ((numA < numB) ? b : boost::any("None"));
        }
    }
}

bool is_greater(const string& str1, const string& str2) {
    vector<string> split1 = split(str1, ",");
    vector<string> split2 = split(str2, ",");
    return stod(split1[0]) > stod(split2[0]);
}

vector<string> split(const string& str, char c) {
    vector<string> result;
    string s = str;
    while (s.find(c) != string::npos) {
        size_t pos = s.find(c);
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    result.push_back(s);
    return result;
}