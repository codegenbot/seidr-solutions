#include <iostream>
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if(strA.find(",") != string::npos){
            replace(strA.begin(), strA.end(), ',', '.');
        }

        if(strB.find(",") != string::npos){
            replace(strB.begin(), strB.end(), ',', '.');
        }

        float numA = stof(strA);
        float numB = stof(strB);
        
        return numA > numB ? a : (numA < numB ? b : "None");
    } else {
        return "None";
    }
}

int main(){
    assert(boost::any_cast<string>(compare_one(string("1"), string("1"))) == "None");

    // Add more test cases here if needed

    cout << "All test cases pass";
    return 0;
}