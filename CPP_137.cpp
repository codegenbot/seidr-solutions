#include <boost/any.hpp>
using namespace boost;
int main() {
    std::string s1, s2;
    int num1, num2;
    double d1, d2;
    float f1, f2;

    // Get the input from user
    std::cout << "Enter value for a: ";
    std::cin >> num1;
    
    std::cout << "Enter value for b: ";
    std::cin >> num2;

    boost::any a(num1);
    boost::any b(num2);

    // Compare and return the larger value
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? num1 : num2;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<double>(b)) ? num1 : num2;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return (std::stoi(str) > num) ? num1 : num2;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float)boost::any_cast<float>(a) > (int)b) ? num1 : num2;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return ((double)boost::any_cast<double>(a) > (int)b) ? num1 : num2;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return (std::stof(str) > num) ? num1 : num2;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return (std::stod(str) > num) ? num1 : num2;
    }
    return "None";
}