#include <iostream>
using namespace std;

int pennies(int cents) {
    int quarters = cents / 25;
    int remaining = cents % 25;
    
    if (quarters > 0) {
        return quarters, 0, 0, remaining;
    }
    else {
        int dimes = remaining / 10;
        remaining = remaining % 10;
        
        if (dimes > 0) {
            return 0, dimes, 0, remaining;
        }
        else {
            int nickles = remaining / 5;
            remaining = remaining % 5;
            
            if (nickles > 0) {
                return 0, 0, nickles, remaining;
            }
            else {
                int penniesNeeded = remaining;
                
                return 0, 0, 0, penniesNeeded;
            }
        }
    }
}

int main() {
    int cents;
    cin >> cents;
    
    int quartersUsed, dimesUsed, nicklesUsed, penniesUsed;
    
    if (cents < 25) {
        penniesUsed = cents;
        cout << "0" << endl;
        cout << penniesUsed << endl;
        cout << "0" << endl;
        cout << "0" << endl;
    }
    else if (cents >= 100) {
        quartersUsed = cents / 25;
        int remaining = cents % 25;
        
        if (remaining >= 10) {
            dimesUsed = remaining / 10;
            remaining = remaining % 10;
            
            if (remaining >= 5) {
                nicklesUsed = remaining / 5;
                penniesUsed = 0;
                
                cout << quartersUsed << endl;
                cout << dimesUsed << endl;
                cout << nicklesUsed << endl;
                cout << "0" << endl;
            }
            else {
                penniesUsed = remaining;
                
                cout << quartersUsed << endl;
                cout << dimesUsed << endl;
                cout << "0" << endl;
                cout << penniesUsed << endl;
            }
        }
        else if (remaining >= 5) {
            nicklesUsed = remaining / 5;
            penniesUsed = 0;
            
            cout << quartersUsed << endl;
            cout << "0" << endl;
            cout << nicklesUsed << endl;
            cout << "0" << endl;
        }
        else {
            penniesUsed = remaining;
            
            cout << quartersUsed << endl;
            cout << "0" << endl;
            "0";
            cout << penniesUsed << endl;
        }
    }
    else {
        if (cents >= 50) {
            quartersUsed = cents / 25;
            int remaining = cents % 25;
            
            if (remaining >= 10) {
                dimesUsed = remaining / 10;
                remaining = remaining % 10;
                
                if (remaining >= 5) {
                    nicklesUsed = remaining / 5;
                    penniesUsed = 0;
                    
                    cout << quartersUsed << endl;
                    cout << "0" << endl;
                    cout << nicklesUsed << endl;
                    cout << "0" << endl;
                }
                else {
                    penniesUsed = remaining;
                    
                    cout << quartersUsed << endl;
                    cout << "0" << endl;
                    "0";
                    cout << penniesUsed << endl;
                }
            }
            else if (remaining >= 5) {
                nicklesUsed = remaining / 5;
                penniesUsed = 0;
                
                cout << quartersUsed << endl;
                "0";
                cout << nicklesUsed << endl;
                "0" << endl;
            }
            else {
                penniesUsed = remaining;
                
                cout << quartersUsed << endl;
                "0" << endl;
                "0";
                cout << penniesUsed << endl;
            }
        }
        else if (cents >= 10) {
            dimesUsed = cents / 10;
            int remaining = cents % 10;
            
            if (remaining >= 5) {
                nicklesUsed = remaining / 5;
                penniesUsed = 0;
                
                cout << "0" << endl;
                cout << dimesUsed << endl;
                cout << nicklesUsed << endl;
                "0" << endl;
            }
            else {
                penniesUsed = remaining;
                
                cout << "0" << endl;
                cout << dimesUsed << endl;
                "0";
                cout << penniesUsed << endl;
            }
        }
        else if (cents >= 5) {
            nicklesUsed = cents / 5;
            penniesUsed = 0;
            
            cout << "0" << endl;
            "0";
            cout << nicklesUsed << endl;
            "0" << endl;
        }
        else {
            penniesUsed = cents;
            
            cout << "0" << endl;
            "0";
            "0";
            cout << penniesUsed << endl;
        }
    }
    
    return 0;
}

int main() {
    int cents;
    cin >> cents;
    if(cents <= 4) {
        int quarters = cents / 25;
        int remaining = cents % 25;
        
        if(remaining >= 10) {
            penniesUsed = 0, dimes = remaining / 10, nicklesUsed = 0, penniesUsed = remaining % 10;
        }
        else if(remaining >= 5) {
            penniesUsed = 0, nicklesUsed = remaining / 5, dimesUsed = 0, penniesUsed = remaining % 5;
        }
        else {
            penniesUsed = remaining;
            dimesUsed = 0, nicklesUsed = 0, penniesUsed = 0;
        }
        
        cout << quartersUsed << endl;
        cout << dimesUsed << endl;
        cout << nicklesUsed << endl;
        cout << penniesUsed << endl;
    }
    else {
        int penniesNeeded;
        int dimes = cents / 10;
        int remaining = cents % 10;
        
        if(remaining >= 25) {
            quarters = remaining / 25;
            remaining = remaining % 25;
            
            if(remaining >= 5) {
                penniesUsed = 0, nicklesUsed = remaining / 5, dimesUsed = 0, penniesUsed = remaining % 5;
            }
            else {
                penniesUsed = remaining;
                dimesUsed = 0, nicklesUsed = 0, penniesUsed = 0;
            }
        }
        else if(remaining >= 10) {
            penniesUsed = 0, dimesUsed = remaining / 10, nicklesUsed = 0, penniesUsed = remaining % 10;
        }
        else if(remaining >= 5) {
            penniesUsed = 0, nicklesUsed = remaining / 5, dimesUsed = 0, penniesUsed = remaining % 5;
        }
        else {
            penniesUsed = remaining;
            dimesUsed = 0, nicklesUsed = 0, penniesUsed = 0;
        }
        
        cout << quarters << endl;
        cout << dimesUsed << endl;
        cout << nicklesUsed << endl;
        cout << penniesUsed << endl;
    }
    
    return 0;
}