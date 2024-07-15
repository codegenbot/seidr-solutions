#include <boost/any.hpp>
#include <string>

template <typename T>
T compare_one(const boost::any& a, const boost::any& b) {
    if (a.empty() || b.empty()) {
        return "None";
    }
    
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        T val_a = boost::any_cast<T>(a);
        T val_b = boost::any_cast<T>(b);
        
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}

// Usage example:
// auto result = compare_one<int>(a, b);