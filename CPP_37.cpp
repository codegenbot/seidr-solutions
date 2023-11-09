/*
This function takes a vector l and returns a vector l' such that
l' is identical to l in the odd indicies, while its values at the even indicies are equal
to the values of the even indicies of l, but sorted.
>>> sort_even({1, 2, 3})
{1, 2, 3}
>>> sort_even({5, 6, 3, 4})
{3, 6, 5, 4}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<float> sort_even(vector<float> l){
    vector<float> result;
    for(int i=0; i<l.size(); i++){
        if(i%2==1) result.push_back(l[i]);
        else {
            vector<float> temp;
            temp.push_back(l[i]);
            for(int j=i+2; j<l.size(); j+=2) temp.push_back(l[j]);
            sort(temp.begin(), temp.end());
            for(int j=0; j<temp.size(); j++) result.push_back(temp[j]);
            i+=temp.size()*2-2;
        }
    }
    return result;
}
