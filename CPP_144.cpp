#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = stoi(strtok(x.c_str(), "/")[0]);
    int b = stoi(strtok(NULL, "/")[0]);
    int c = stoi(strtok(n.c_str(), "/")[0]);
    int d = stoi(strtok(NULL, "/")[0]);

    return (1.0 * a * d) / (b * c) == (int)((1.0 * a * d) / (b * c));
}