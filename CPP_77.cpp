#include <cmath>
bool iscuber(int a){
    int i = 1;
    while (true) {
        if (pow(i, 3) == a) {
            return true;
        }
        if (i * i > a) {
            return false;
        }
        i++;
    }
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(iscuber(num))
        cout << num << " is a perfect cube." << endl;
    else
        cout << num << " is not a perfect cube." << endl;
    return 0;
}