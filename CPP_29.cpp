#include <vector>
#include <string>

// Define the filter_by_prefix function first
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        throw runtime_error("Vectors are not the same size");
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            throw runtime_error("Vectors are not the same");
    }
    return true;
}

int main() {
    try{
        assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    }catch(runtime_error& e){
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}