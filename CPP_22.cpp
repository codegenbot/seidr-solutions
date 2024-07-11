#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

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
    list<any> values = {1, "hello", 2, 3.5, 4};
    vector<int> filtered_integers = filter_integers(values);

    for(auto num : filtered_integers){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}