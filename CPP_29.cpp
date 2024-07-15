bool issame(vector<string> a, vector<string> b); // Function declaration

bool issame(vector<string> a, vector<string> b){ // Function definition
    return a == b;
}

#include <cassert> // Include the assert header

int main(){
	assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
}