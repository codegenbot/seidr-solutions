```cpp
int len = str.length();
if(len <= 1) return false;
for(int i=2; i*i<=stoi(std::to_string(len)); i++){
    if(stoi(std::to_string(len))%i==0) return false;
}
return true;