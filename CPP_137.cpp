#include <any>
#include <iostream>
#include <string>

using namespace std;

any compare_one(any a, any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b))
            return a;
        else if(any_cast<int>(a) < any_cast<int>(b))
            return b;
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b))
            return a;
        else if(any_cast<float>(a) < any_cast<float>(b))
            return b;
    }
    else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float num1 = stof(any_cast<string>(a).replace(any_cast<string>(a).find(','), 1, "."));
        float num2 = stof(any_cast<string>(b).replace(any_cast<string>(b).find(','), 1, "."));
        if(num1 > num2)
            return a;
        else if(num1 < num2)
            return b;
    }
    assert(false);
}

int main() {
    // Your main code here
    return 0;
}