```cpp
#include<string>
using namespace std;

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(file_name[i] == '.'){
            found_dot = true;
        } else if(found_dot){
            if(file_name.substr(i).find_first_of("txt exe dll") != string::npos)
                return "Yes";
            else
                return "No";
        }
    }
    if(!found_dot) return "No";
    return digit_count <= 3 ? "Yes" : "No";
}

int main(){
    string file_name;
    cout<<"Enter a filename: ";
    cin>>file_name;
    cout<<"Result: "<<file_name_check(file_name)<<endl;
    return 0;
}