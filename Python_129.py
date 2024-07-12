```
def min_length():
    all_paths = [input().split() for _ in range(int(input()))]  
    return min(sum(map(int, path)) for path in all_paths)