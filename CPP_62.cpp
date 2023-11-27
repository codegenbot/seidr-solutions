#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> derivative_xs;
    for(int i=1; i<xs.size(); i++){
        derivative_xs.push_back(xs[i] * i);
    }
    return derivative_xs;
}

bool issame(vector<float> a, vector<float> b){
   // implementation of the function
}

int main(){
   vector<float> derivative(vector<float> xs);
   
   // rest of the code
   
   return 0;
}