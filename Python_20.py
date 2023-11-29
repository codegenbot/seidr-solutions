from typing import List, Tuple

def solve(n: int, points: List[Tuple[int, int]]) -> int:
    # YOUR CODE HERE
    pass
    
n = int(input())
points = [tuple(map(int, input().split())) for _ in range(n)]

result = solve(n, points)
print(result)