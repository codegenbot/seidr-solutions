def solve(N):
    binary = str(bin(N)[2:])
    result = ['a' if i % 2 else 'b' for i in range(len(binary))]
    return "".join(result)