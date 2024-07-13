#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream xx(x), yy(n);
    xx >> a >> char('/'); 
    yy >> c >> char('/');
    if(a*c != b*d) return false;
    int g = __gcd(a,c);
    return simplify(xx.str().substr(0,xx.tellp()-1),yy.str().substr(0,yy.tellp()-1)).subfrac(g).size() == 2;
}

string fraction(int a,int b){
    if(b<0) return "-" + fraction(-a,-b);
    if(b==1) return (a>0) ? to_string(a) : "-"+to_string(-a);
    if(a<0) return "-" + fraction(-a,b);
    if(a%b==0) return to_string(a);
    return to_string(a)+"/"+to_string(b);
}

string simplify::subfrac(int g){
    int a = this->str().substr(0,this->find('/')).stoi();
    int b = stoi(this->substr(this->find('/')+1));
    return fraction(a/g,b/g);
}