/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
#include<cassert>
#include<iostream>
#include<algorithm>
#include<iterator>
typedef std::list<boost::any> list_any;
using namespace std;


bool issame(vector<int> v1, vector<int> v2){
    if(v1.size()!=v2.size())
        return false;
    for(int i = 0; i < v1.size(); ++i){
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

vector<int> filter_integers(list_any values){
    vector<int> v;
    for(auto it = values.begin(); it != values.end(); ++it)
    {
        if(it->type() == typeid(int))
        {
            v.push_back(boost::any_cast<int>(*it));
        }
    }
    return v;
}

int main(){
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}) ,{3, 3, 3}));
    assert (issame(filter_integers({1, 2, 3, "abc", {}, {}}) ,{1, 2, 3}));
    assert (issame(filter_integers({1, 2, 3, "abc", {}, {}}) ,{1, 2, 3}));
    assert (issame(filter_integers({1, 2, 3, "abc", {}, {}}) ,{1, 2, 3}));
    assert (issame(filter_integers({1, 2, 3, "abc", {}, {}}) ,{1, 2, 3}));
    assert (issame(filter_integers({1, 2, 3, "abc", {}, {}}) ,{1, 2, 3}));
    assert (issame(filter_integers({1, 2, 3, "abc", {}, {}}) ,{1, 2, 3}));
}
