// Problem description: Determine if the input number is a perfect cube.

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
    if(iscuber(n)) {
        cout << "The number is a perfect cube.\n";
    } else {
        cout << "The number is not a perfect cube.\n";
    }
}