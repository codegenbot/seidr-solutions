def solve(N):
    return bin(N).count('1')

N = int(input("Enter a number: "))
print(solve(N))