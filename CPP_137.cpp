```
if (a.type() == boost::any::type::void_) {
    if (b.type() == boost::any::type::integer) {
        return b;
    }
    else if (b.type() == boost::any::type::floating_point) {
        double db = boost::any_cast<double>(b);
        if (a.type() == boost::any::type::string) {
            string s = boost::any_cast<string>(a);
            int i = 0;
            while (s[i] != '.' && s[i] != ',') i++;
            s = s.substr(i);
            double da = stod(s);
            if (db > da) return b;
            else if (da > db) return a;
            else return boost::any("None");
        }
        else {
            int i = 0;
            while (a.type() == boost::any::type::integer) i++;
            double da = stod(a.convert_to<string>());
            if (db > da) return b;
            else if (da > db) return a;
            else return boost::any("None");
        }
    }
}
else {
    if (b.type() == boost::any::type::integer) {
        return a;
    }
    else if (b.type() == boost::any::type::floating_point) {
        double db = boost::any_cast<double>(b);
        if (a.type() == boost::any::type::string) {
            string s = boost::any_cast<string>(a);
            int i = 0;
            while (s[i] != '.' && s[i] != ',') i++;
            s = s.substr(i);
            double da = stod(s);
            if (db > da) return b;
            else if (da > db) return a;
            else return boost::any("None");
        }
        else {
            int i = 0;
            while (a.type() == boost::any::type::integer) i++;
            double da = stod(a.convert_to<string>());
            if (db > da) return b;
            else if (da > db) return a;
            else return boost::any("None");
        }
    }
}
return a > b ? a : b;