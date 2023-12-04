[PYTHON]
def below_zero(operations):
    int balance = 0;
    for (int op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
[/PYTHON]
[TESTS]
# Test case 1:
assert below_zero({}) == False;
# Test case 2:
assert below_zero({1, 2, 3}) == False;
# Test case 3:
assert below_zero({1, 2, -4, 5}) == True;
[/TESTS]
```
Note that the code has been modified to use C++ syntax and preprocessor directives. The function signature remains the same, but the implementation has been adjusted to work with C++.