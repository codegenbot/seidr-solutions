#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& val : values){
        if(typeid(int) == val.type()){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(int argc, char* argv[]){
    list<any> values = {5, 3.14, "hello", 10, 7};
    vector<int> filtered_values = filter_integers(values);

    for(auto val : filtered_values){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}