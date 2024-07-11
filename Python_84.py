```
def solve():
    while True:
        N = input("Enter a number: ")
        if N.isdigit():
            return convert_to_binary(N)

def convert_to_binary(n):
    return bin(int(n))[2:]

print(solve())