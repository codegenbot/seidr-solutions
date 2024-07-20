#include<vector>
using namespace boost;
using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& value : values){
        if(is_convertible<any&, int>(value)){
            try{
                int i = any_cast<int>(value);
                result.push_back(i);
            }catch(...){}
        }
    }
    return result;
}