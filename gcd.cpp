```c++
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else {
        int temp = gcd(b, a % b);
        while (a % temp != 0 && b % temp != 0) 
            temp--;
        return temp;
    }
}

int main() {
    int a = 48; // set your desired inputs here
    int b = 18;
    std::cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << std::endl;
    return 0;
}