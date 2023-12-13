#include <string>

int digitSum(std::string s){
    int sum = 0;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            sum += (int)s[i];
        }
    }
    return sum;
}

int main(){
    assert(digitSum("You arE Very Smart") == 327);

    return 0;
}