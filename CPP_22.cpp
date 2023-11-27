#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int a, int b){
    return a == b;
}

int main(){
    list<boost::any> values;
    values.push_back(10);
    values.push_back(20);
    values.push_back("hello");
    values.push_back(30);
    
    vector<int> integers = filter_integers(values);
    
    for (auto i : integers) {
        cout << i << " ";
    }
    cout << endl;
    
    int x = 10;
    int y = 20;
    if (issame(x, y)) {
        cout << "x and y are same" << endl;
    } else {
        cout << "x and y are different" << endl;
    }
    
    return 0;
}