#include <iostream>
#include <list>
#include <vector>
#include <any>

using namespace std;

bool issame(const any& a, const any& b) {
    return get_if<list_any>(boost::any_cast<any>(&a)) == get_if<list_any>(boost::any_cast<any>(&b));
}

int main() {
    list_any values;
    // Add elements to the list
    filter_integers(values);
}