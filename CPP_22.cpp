#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& val : values){
        if(val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(int argc, char* argv[]){
    list<any> values = {1, 2, 3, "hello", 4.5, 6};
    vector<int> filtered_values = filter_integers(values);

    for(auto num : filtered_values){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}