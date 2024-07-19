if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if ((int)a > (int)b)
        return a;
    else if ((int)a < (int)b)
        return b;
    else
        return "None";
}
else if ((a.type() == typeid(float) || a.type() == typeid(double)) && (b.type() == typeid(float) || b.type() == typeid(double))) {
    if ((float)a > (float)b)
        return a;
    else if ((float)a < (float)b)
        return b;
    else
        return "None";
}
else if ((a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float) || b.type() == typeid(double)))) {
    if (stoi((string)a) > (int)b || stod((string)a) > (double)b)
        return a;
    else if ((int)b > stoi((string)a) || (double)b > stod((string)a))
        return boost::any(b);
    else
        return "None";
}
else if ((b.type() == typeid(string) && (a.type() == typeid(int) || a.type() == typeid(float) || a.type() == typeid(double)))) {
    if ((int)a > stoi((string)b) || (double)a > stod((string)b))
        return a;
    else if (stoi((string)a) < (int)b || stod((string)a) < (double)b)
        return boost::any(b);
    else
        return "None";
}
else {
    throw invalid_argument("Invalid types");
}