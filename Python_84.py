def solve(n):
    N = int(input())
    ones = bin(N).count('1')
    return str(ones).zfill(bin(N-1).count('1') + 1)

if __name__ == "__main__":
    n = int(input("Enter a number: "))
    print(solve(n))