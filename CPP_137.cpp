#include <iostream>
#include <string>
using namespace std;

bool isNumeric(const string& s) {
    return all_of(s.begin(), s.end(), ::isdigit);
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        try {
            float fa = stof(a.convert<string>().c_str());
            float fb = (float)b;
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        try {
            double fa = stod(a.convert<string>().c_str());
            double fb = (double)b;
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        try {
            int fa = stoi(a.convert<string>().c_str());
            int fb = (int)b;
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        try {
            float fa = stof(a.convert<string>().c_str());
            float fb = stof(b.convert<string>().c_str());
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(string) && isNumeric(a.convert<string>().c_str()) && b.type() == typeid(int)) {
        try {
            int fa = stoi(a.convert<string>().c_str());
            int fb = (int)b;
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(string) && isNumeric(b.convert<string>().c_str()) && b.type() == typeid(int)) {
        try {
            int fa = stoi(a.convert<string>().c_str());
            int fb = stoi(b.convert<string>().c_str());
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    }
    return "None";
}