```
def modp(x, y):
    return x % y

def check(f):
    test_input = 10
    expected_output = lambda x, y: x % y(test_input, test_input)
    if f(test_input, test_input) == expected_output:
        return f(test_input, test_input)
    else:
        return "Error: Not a Modular Polynomial Arithmetic Function"

print(check(modp))