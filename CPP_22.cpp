#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

#include <boost/config.hpp>

bool issame(std::vector<int> a,std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            int num = boost::any_cast<int>(value);
            bool flag = false;
            for(const auto& i: result){
                if(i==num)flag=true;break;
            }
            if(!flag)result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {1, 2, 3}) == false);
}