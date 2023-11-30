#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val_a = boost::any_cast<int>(a);
        int val_b = boost::any_cast<int>(b);
        
        if (val_a > val_b) {
            return val_a;
        } else if (val_b > val_a) {
            return val_b;
        } else {
            return boost::any("None");
        }
    }
    
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val_a = boost::any_cast<float>(a);
        float val_b = boost::any_cast<float>(b);
        
        if (val_a > val_b) {
            return val_a;
        } else if (val_b > val_a) {
            return val_b;
        } else {
            return boost::any("None");
        }
    }
    
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string val_a = boost::any_cast<string>(a);
        string val_b = boost::any_cast<string>(b);
        
        // Remove comma from string representation of real numbers
        val_a.erase(remove(val_a.begin(), val_a.end(), ','), val_a.end());
        val_b.erase(remove(val_b.begin(), val_b.end(), ','), val_b.end());
        
        // Convert string representation of real numbers to float
        float float_a = stof(val_a);
        float float_b = stof(val_b);
        
        if (float_a > float_b) {
            return val_a;
        } else if (float_b > float_a) {
            return val_b;
        } else {
            return boost::any("None");
        }
    }
    
    return boost::any("None");
}