```
def solve():
    N = int(input("Enter a number: "))
    def convert_to_binary(n):
        return bin(n)[2:]
    return convert_to_binary(N)

print(solve())