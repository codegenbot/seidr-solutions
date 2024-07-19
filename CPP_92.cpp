```cpp
int mainFunction() {
    double x = 3.01;
    int y, z;
    cout << "Enter three numbers: ";
    if (!(cin >> fixed >> setprecision(6) >> x >> ws >> y >> ws >> z)) { 
        cout << "Error: Please enter valid integer values.\n";
    } else {
        cout << "The numbers are integers: " << y << ", " << z << "\n";
    }

    return 0;
}