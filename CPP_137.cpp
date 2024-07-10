#include <iostream>
#include <variant>
#include <string>
#include <algorithm>

using namespace std;

std::variant<int, float, string> compare_one(std::variant<int, float, string> a, std::variant<int, float, string> b){
    if(a.index() == 0 && b.index() == 0){
        return get<int>(a) > get<int>(b) ? a : b;
    } else if(a.index() == 1 && b.index() == 1){
        return get<float>(a) > get<float>(b) ? a : b;
    } else if(a.index() == 2 && b.index() == 2){
        string strA = get<string>(a);
        string strB = get<string>(b);

        if(strA.find(",") != string::npos){
            replace(strA.begin(), strA.end(), ',', '.');
        }

        if(strB.find(",") != string::npos){
            replace(strB.begin(), strB.end(), ',', '.');
        }

        float numA = stof(strA);
        float numB = stof(strB);
        
        return numA > numB ? a : (numA < numB ? b : "None");
    } else {
        return "None";
    }
}

int main(){
    assert(get<string>(compare_one("1"s, "1"s)) == "None");

    // Add more test cases here if needed

    cout << "All test cases pass";
    return 0;
}