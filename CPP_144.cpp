[PYTHON]
def simplify(x_it, n_it):
    # ...
    if x_it == n_it:
        return True
    else:
        return False

# Main function
def main():
    x = "1/5"
    n = "5/1"
    x_int = int(x)
    n_int = int(n)
    result = simplify(x.begin(), x.end())
    print(result)

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
simplify("1/5", "5/1")
# Returns: True
# Test case 2:
simplify("1/6", "5/1")
# Returns: False
# Test case 3:
simplify("1/7", "5/1")
# Returns: False
# Test case 4:
simplify("1/8", "5/1")
# Returns: False
# Test case 5:
simplify("1/9", "5/1")
# Returns: False
[/TESTS]
