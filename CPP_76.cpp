bool isSimplePower(int x, int n){
    if(x <= 0) {
        return false;
    }
    double y = pow(n, ceil(log2(x)));
    return (y == x);
}

int main(){
    int x, n;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> n;
    if(isSimplePower(x, n))
        cout << x << " is a simple power of " << n << endl;
    else
        cout << x << " is not a simple power of " << n << endl;
    return 0;
}