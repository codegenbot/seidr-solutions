```cpp
#include <vector>
#include <cmath>

double max_element(std::vector<double> l){
    double maximum = l[0];
    for(int i=1; i<l.size(); i++){
        if(abs(l[i]) > abs(maximum))
            maximum = l[i];
    }
    return maximum;
}