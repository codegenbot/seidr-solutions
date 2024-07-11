// Problem description: Check if the given integer is a perfect cube.

bool iscuber(int a){
    int i = 0;
    while (pow(i+1,3) <= a) {
        if(pow(i+1,3) == a) return true;
        i++;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(iscuber(n)) 
        cout << n << " is a perfect cube.";
    else 
        cout << n << " is not a perfect cube.";
    
    return 0;
}