#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b) { 
    return a == b; 
}

vector<int> filter_integers(std::list<boost::any> values) { 
    vector<int> result; 
    for (const auto& val : values) { 
        if (val.type() == typeid(int)) { 
            result.push_back(boost::any_cast<int>(val)); 
        } 
    } 
    return result; 
}

int main() {
    std::list<boost::any> values;
    values.push_back(10);
    values.push_back(20.5);
    values.push_back(30);
    
    vector<int> filtered_values = filter_integers(values);
    
    for (const auto& val : filtered_values) {
        std::cout << val << " ";
    }

    return 0;
} 