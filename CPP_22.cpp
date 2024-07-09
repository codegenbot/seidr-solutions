#include <boost/any.hpp>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<bool>(value)) {
            int temp = boost::any_cast<int>(value);
            bool issame = true; // Add this variable
            for(int i = 0; i < result.size(); i++) { 
                if(result[i] != temp) { 
                    issame = false;
                    break;
                }
            }
            if(issame) {
                result.push_back(temp);
            } else {
                bool found = false;
                for(int i = 0; i < result.size(); i++) {
                    int val = boost::any_cast<int>(value); 
                    if(result[i] == val) { 
                        found = true;
                        break;
                    }
                }
                if(!found) {
                    result.push_back(temp);
                }
            }
        }
    }
    return result;
}