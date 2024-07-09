#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        istringstream iss(strA);
        float numA;
        if (!(iss >> numA)) {
            numA = stof(strA.substr(0, strA.find(',')));
        }

        istringstream iss2(strB);
        float numB;
        if (!(iss2 >> numB)) {
            numB = stof(strB.substr(0, strB.find(',')));
        }

        return (numA > numB) ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string strA = boost::any_cast<string>(a);
        istringstream iss(strA);
        float numA;
        if (!(iss >> numA)) {
            numA = stof(strA.substr(0, strA.find(',')));
        }

        return (boost::any_cast<float>(b) > numA) ? b : a;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        boost::any temp = a;
        a = b;
        b = temp;
    }

    return "None";
}