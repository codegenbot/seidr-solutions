```
int change_base(int x, int base){
    if(base == 10){
        return std::to_string(x);
    }
    else{
        return std::bitset<32>(x).to_string();
    }
}
```