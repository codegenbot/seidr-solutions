```
modp = int(input("Enter a number: "))
def check(x):
    if x % modp == 0:
        print(f"{x} is divisible by {modp}")
    else:
        print(f"{x} is not divisible by {modp}")
check(modp)