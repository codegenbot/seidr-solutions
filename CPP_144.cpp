#include <sstream>

bool simplify(string x, string n) {
    int x_num, x_den, n_num, n_den;
    char slash;
    
    stringstream x_stream(x);
    x_stream >> x_num >> slash >> x_den;
    
    stringstream n_stream(n);
    n_stream >> n_num >> slash >> n_den;
    
    int result_num = x_num * n_num;
    int result_den = x_den * n_den;
    
    return result_num % result_den == 0;
}