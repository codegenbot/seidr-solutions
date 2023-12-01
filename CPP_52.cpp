#include <vector>

bool below_threshold(vector<int> l, int t){
    for(int i = 0; i < l.size(); i++){
        if(l[i] >= t){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> l = {1, 2, 3, 4, 5};
    int t = 6;
    bool result = below_threshold(l, t);
    return 0;
}