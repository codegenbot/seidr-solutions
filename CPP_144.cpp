#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    char arr1[6], arr2[4];
    stringstream s1(x), s2(n);
    s1 >> arr1;
    char slash;
    s2 >> arr2[0] >> slash >> arr2[1];
    
    return (atoi(arr1) * atoi(arr2[1].c_str()) == atoi(arr2[0].c_str()) * atoi(&slash + 1));
}