#include <string>
using namespace std;

bool simplify(string x, string n) {
    long long int a = atoll(strtok(x.c_str(), "/")) * atoll(strtok(NULL, "/")) +
            atoll(strtok(n.c_str(), "/")) * atoll(strtok(NULL, "/"));
    long long int b = atoll(strtok(x.c_str(), "/")) * atoll(strtok(NULL, "/")) /
                      atoll(strtok(n.c_str(), "/")) * atoll(strtok(NULL, "/"));

    return b == 1;
}