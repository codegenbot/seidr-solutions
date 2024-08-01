```cpp
bool found = false;
for(int i=0; i<l.size(); i++){
    for(int j=i+1; j<l.size(); j++){
        if(l[i]+l[j] == 0){
            found = true;
            break;
        }
    }
    if(found) break;
}
return found;