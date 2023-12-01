#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

vector<int> filter_integers(list<boost::any> values);

bool issame(vector<int> a, vector<int> b);

int main() {
    list<boost::any> input_values;
    input_values.push_back(10);
    input_values.push_back('a');
    input_values.push_back(20);
    input_values.push_back("hello");

    vector<int> result = filter_integers(input_values);

    for(auto num : result){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}