#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> other) {
    if (a.size() != other.size()) 
        return "Error: The vectors are not the same size.\n";
        
    for (int i = 0; i < a.size(); i++) 
        if (a[i] != other[i]) 
            return "Error: The elements at position " + to_string(i) + " do not match.\n";

    return "The vectors are identical.\n";
}