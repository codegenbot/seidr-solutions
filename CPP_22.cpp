#include <iostream>
#include <vector>
#include <any>
#include <list>
#include <cassert>
using namespace std;

vector<int> filter_integers(list<any> values); // Add function declaration

bool issame(vector<int> a, vector<int> b){ // Add return type and fix parameter declaration
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

vector<int> filter_integers(list<any> values){ // Add function definition
    vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3})); // Add assert for testing
    
    cout << "Test passed!" << endl;
    return 0;
}