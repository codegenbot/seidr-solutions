#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<int>(value)) {
            bool isSame = false;
            for (const auto &otherValue : values) {
                if(boost::any_cast<int>(otherValue)){
                    if(issame({boost::any_cast<int>(value)}, {boost::any_cast<int>(otherValue)})){
                        isSame=true;break;
                    }
                }
            }
            if(!isSame){
                result.push_back(boost::any_cast<int>(value));
            }
        }
    }
    return result;
}