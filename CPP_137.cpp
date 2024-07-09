if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
        return b;
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
        return a;
    } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
        return b;
    }
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string strA = boost::any_cast<string>(a);
    string strB = boost::any_cast<string>(b);
    strA.erase(std::remove(strA.begin(), strA.end(), ','), strA.end());
    strB.erase(std::remove(strB.begin(), strB.end(), ','), strB.end());
    if (stod(strA) > stod(strB)) {
        return a;
    } else if (stod(strA) < stod(strB)) {
        return b;
    }
}
return "None";
}