#include <iostream>
#include<string>
#include<algorithm>
#include<stdexcept>
#include< boost/any>

using namespace std;

any compare_one(any a, any b) {
    if (boost::any_cast<double>(a) > stod(boost::any_cast<string>(b)))
        return a;
    else
        return b;

    if (stod(boost::any_cast<string>(a)) > boost::any_cast<double>(b))
        return a;
    else
        return b;

    string da = boost::any_cast<string>(a);
    string db = boost::any_cast<string>(b);

    if (da > db)
        return a;
    else if (db > da)
        return b;
    throw invalid_argument("Tie");

}

int main() {
    cout << boost::any_cast<double>(compare_one(1, 2.5)) << endl;
    cout << boost::any_cast<double>(compare_one(1, "2,3")) << endl;
    cout << boost::any_cast<string>(compare_one("5,1", "6")) << endl;
    cout << boost::any_cast<double>(compare_one("1", 1)) << endl;
    return 0;
}