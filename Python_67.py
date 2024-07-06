n = int(input())
def fruit_distribution(s):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = list(map(int, s.split()))
    return sum(parts) if len(parts) >= n else 0

fruit_distribution(input())