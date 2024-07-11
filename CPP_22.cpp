#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size();
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).good()) {
            int val = boost::any_cast<int>(value);
            bool isGood = boost::any_cast<int>(value).good();
            if(isGood){
                result.push_back(val);
            }
        } else {
            // Check the type of value
            try{
                std::string str = boost::any_cast<std::string>(value);
                cout << "Non-integer value: " << str << endl;
            }catch(boost::bad_any_cast& e){
                cout << "Invalid value: " << e.what() << endl;
            }
        }
    }
    return result;
}