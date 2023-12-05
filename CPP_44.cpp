def change_base(x, base):
    pass

def to_string(x):
    pass

def main():
    x = int(input())
    base = int(input())
    result = change_base(x, base)
    print(result)

def change_base(x, base):
    return str(x) if base == 10 else bin(x)[2:].zfill(len(str(x)))

main()