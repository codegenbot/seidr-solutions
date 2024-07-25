boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        
        int pos1 = strA.find('.');
        int pos2 = strB.find('.');
        if (pos1 == string::npos && pos2 != string::npos) {
            return b;
        }
        else if (pos1 != string::npos && pos2 == string::npos) {
            return a;
        }
        else if (stod(strA) > stod(strB)) {
            return a;
        }
        else if (stod(strA) < stod(strB)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);
        int pos = str.find('.');
        if (pos != string::npos) {
            return a;
        }
        else {
            double numB = boost::any_cast<double>(b);
            if (stod(str) > numB) {
                return a;
            }
            else if (stod(str) < numB) {
                return b;
            }
           	else {
           	return boost::any("None");
           	}
        }
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double numA = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        int pos = str.find('.');
        if (pos != string::npos) {
            return b;
        }
       	else {
       		if (numA > stod(str)) {
           	return a;
           	}
           	else if (numA < stod(str)) {
           	return b;
           	}
           	else {
           	return boost::any("None");
           	}
       }
    }
    
    return boost::any();
}