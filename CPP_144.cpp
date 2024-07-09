#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = stoi(strtok((x.substr(1,x.find('/'))).c_str(),"/")[0]);
    int b = stoi(strtok("", "/")[0]);
    int c = stoi(strtok((n.substr(1,n.find('/'))).c_str(),"/")[0]);
    int d = stoi(strtok("", "/")[0]);

    return (a*d) == (b*c);
}