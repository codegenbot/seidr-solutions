```
def solve(is_binary):
    if is_binary:
        num = int(input("Enter a binary number: "), 2)
        print(num)
    else:
        num = float(input("Enter a decimal number: "))
        print(num)

if __name__ == "__main__":
    solve(True)