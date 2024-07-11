#include <cmath>
#include <cassert>

bool iscuber(int a){
    int i = 1;
    while (pow(i,3) <= a) {
        if (pow(i,3) == a) return true;
        i++;
    }
    return false;

}

int main() {
    assert (iscuber(1729) == false);
    for(int i = 1; i <= 500; ++i){
        if(iscuber(i)){
            std::cout << "First perfect cube after 1729 is: " << i << std::endl;
            break;
        }
    }
    return 0;
}