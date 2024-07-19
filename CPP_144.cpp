#include<string>
using namespace std;

bool simplify(string x,string n){
    int a = stoi(strtok((x.substr(1)).c_str(), "/"));
    int b = stoi(strtok(NULL, "/"));
    int c = stoi(strtok((n.substr(1)).c_str(), "/"));
    int d = stoi(strtok(NULL, "/"));

    if (a*d == b*c) return true;
    else return false;
}