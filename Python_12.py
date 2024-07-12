def solve_problem():
    n = int(input())
    strings = [input() for _ in range(n)]

    return max(strings, key=lambda x: (len(x), x))