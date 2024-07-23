#include <boost/lexical_cast.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<int>(a)) {
        if (is_any_of<int>(b)) {
            int ai = any_cast<int>(a);
            int bi = any_cast<int>(b);
            if (ai > bi) return a;
            else if (ai < bi) return b;
            else return "None";
        } else if (is_any_of<double>(b)) {
            double bi = any_cast<double>(b);
            if (bi > ai) return b;
            else if (bi < ai) return a;
            else return "None";
        } else if (is_same_type<string, boost::any>(b)) {
            string bs = boost::any_cast<string>(b);
            if (stod(bs) > ai) return b;
            else if (stod(bs) < ai) return a;
            else return "None";
        }
    } else if (is_any_of<int>(b)) {
        int bi = any_cast<int>(b);
        if (bi > 0) return b;
        else return a;
    } else if (is_any_of<double>(b)) {
        double bi = any_cast<double>(b);
        if (bi > ai) return b;
        else if (bi < ai) return a;
        else return "None";
    } else if (is_same_type<string, boost::any>(b)) {
        string bs = boost::any_cast<string>(b);
        double bi = stod(bs);
        if (bi > ai) return b;
        else if (bi < ai) return a;
        else return "None";
    }
    return "None";
}