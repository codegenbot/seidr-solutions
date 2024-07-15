```c++
int main() {
    int a = 71065;
    int b = 426691; 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD: " << a << endl;

    return 0;
}