```c++
bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        bool flag = true;
        size_t pos = 0;
        while(pos < a[i].size()){
            if(pos < b[i].size() && a[i][pos] == b[i][pos])
                pos++;
            else{
                flag = false;
                break;
            }
        }
        if(!flag)
            return false;
    }
    return true;
}

int main(){
    // your code here
}