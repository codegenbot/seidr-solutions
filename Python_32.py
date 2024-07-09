def solve():
    t = int(input())
    results = []
    for _ in range(t):
        a, b, c = map(int, input().split())
        results.append(-c / b)
    return results

results = solve()
for result in results:
    print(result)