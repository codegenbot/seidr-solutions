#include <string>

template <typename T>
T issame(const T& lst1, const T& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;
    
    for (const string& str : lst1) {
        total_chars1 += str.size();
    }
    
    for (const string& str : lst2) {
        total_chars2 += str.size();
    }
    
    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}