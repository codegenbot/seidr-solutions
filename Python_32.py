def find_zero(xs: list):
    # Your code here
    number = int(input("Enter a number: "))
    for x in xs:
        if x == 0:
            return True
    return False