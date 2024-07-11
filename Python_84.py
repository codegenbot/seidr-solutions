```
def convert_to_binary(N):
    return bin(N)[2:]

def solve():
    N = int(input("Enter a number: "))
    result = convert_to_binary(N)
    return result

result = solve()
print(result)