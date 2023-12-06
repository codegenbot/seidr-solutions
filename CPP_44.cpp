[PYTHON]
def change_base(x, base):
    return str(x) if base == 10 else bin(x)[2:].zfill(len(str(x)))

def main():
    x = int(input("Enter a number: "))
    base = int(input("Enter the base: "))
    result = change_base(x, base)
    print("The result is:", result)

if __name__ == "__main__":
    main()
[/PYTHON] 