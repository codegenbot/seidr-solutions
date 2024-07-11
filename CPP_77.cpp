// Problem description: Given an integer 'a', check if it is a perfect cube.

bool iscuber(int a){
    int i = 0;
    while (pow(i+1,3) <= a) {
        if(pow(i+1,3) == a) return true;
        i++;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(iscuber(num)) {
        cout << "The number is a perfect cube." << endl;
    } else {
        cout << "The number is not a perfect cube." << endl;
    }

    return 0;
}