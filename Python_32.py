
def find_zero(xs: list):
    number = int(input("Enter a number: "))
    for x in xs:
        if x == 0:
            return True
    return False