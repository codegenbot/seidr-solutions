#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    float fa;
    double da;
    long la;
    int ia;
    bool fba = boost::any_cast<float>(&fa);
    bool dba = boost::any_cast<double>(&da);
    bool laba = boost::any_cast<long>(&la);
    bool iaba = boost::any_cast<int>(&ia);

    if (fba && dba) {
        return (fa > da) ? a : b;
    } else if (laba && iaba) {
        return (la > ia) ? a : b;
    } else if (fba || laba) {
        return (fa > la) ? a : b;
    } else if (dba) {
        return (da > 0.0) ? a : b;
    }

    string sa, sb;
    boost::any_cast<string>(&sa);
    boost::any_cast<string>(&sb);

    return (sa > sb) ? a : b;
}