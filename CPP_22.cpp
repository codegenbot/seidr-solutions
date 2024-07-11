#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

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
    list<any> values = {10, "hello", 20, 30, "world", 40};
    vector<int> filtered_values = filter_integers(values);

    for(auto val : filtered_values){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}