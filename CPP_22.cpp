#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& val : values){
        if(val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(int argc, char* argv[]) {
    list<any> values;
    values.push_back(10);
    values.push_back(20);
    values.push_back("hello");
    values.push_back(30);

    vector<int> filtered_values = filter_integers(values);

    for (int val : filtered_values) {
        cout << val << " ";
    }
    return 0;
}