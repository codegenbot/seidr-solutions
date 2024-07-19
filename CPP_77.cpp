#include<cmath>
bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a) return true;
        i++;
    }
    return false;
}
int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    if(iscuber(n))
        std::cout << n << " is a perfect cube." << std::endl;
    else
        std::cout << n << " is not a perfect cube." << std::endl;
    return 0;
}