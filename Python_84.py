    def solve(N):
        total = sum(int(i) for i in str(bin(N)[2:]))
        return bin(total)[2:]