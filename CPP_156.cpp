```
string romanToInt(int n) {
    if (n <= 0)
        return "";
    else if (n >= 1000) {
        return "M" + romanToInt(n - 1000);
    } 
    else if (n >= 900) {
        return "CM" + romanToInt(n - 900);
    }
    else if (n >= 500) {
        return "D" + romanToInt(n - 500);
    }
    else if (n >= 400) {
        return "CD" + romanToInt(n - 400);
    } 
    else if (n >= 100) {
        string roman = "";
        while (n >= 100) {
            roman += "C";
            n -= 100;
        }
        if (n >= 90) {
            return "XC" + romanToInt(n - 90);
        } 
        else if (n >= 50) {
            roman += "L";
            n -= 50;
        } 
        else if (n >= 40) {
            return "XL" + romanToInt(n - 40);
        }
        while (n >= 10) {
            roman += "X";
            n -= 10;
        }
        if (n >= 9) {
            return "IX" + romanToInt(n - 9);
        } 
        else if (n >= 5) {
            roman += "V";
            n -= 5;
        } 
        else if (n >= 4) {
            return "IV" + romanToInt(n - 4);
        }
        while (n > 0) {
            roman += "I";
            n--;
        }
        return roman; // Return by value
    } else if (n >= 4) {
        return "IV";
    } 
    else if (n >= 1) {
        string roman = ""; // Return by value
        for (int i = 0; i < n; i++) {
            roman += "I";
        }
        return roman;
    }
    return "";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    cout << romanToInt(n) << endl;
}