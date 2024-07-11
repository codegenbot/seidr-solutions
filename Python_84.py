```
def solve():
    N = input("Enter a number: ")
    def convert_to_binary(n):
        return bin(int(n))[2:]
    return convert_to_binary(N)

print(solve())