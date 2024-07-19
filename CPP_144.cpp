Here is the completed code:

```cpp
#include <string>
#include <cmath>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(strtok((x.substr(1,x.length()-2)).c_str(),"/"));
    int b = stoi(strtok(NULL,"/") );
    
    int c = stoi(strtok((n.substr(1,n.length()-2)).c_str(),"/"));
    int d = stoi(strtok(NULL,"/") );

    double res = (double)a*d/(double)b*c;

    return floor(res) == res;
}