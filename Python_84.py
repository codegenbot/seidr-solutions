```python
def solve():
    def convert_to_binary(n):
        return bin(n)[2:]
    N = convert_to_binary(int(input("Enter a binary number: ")))
    return N

print(solve())