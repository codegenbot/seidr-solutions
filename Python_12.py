def find_longest_string():
    n = int(input())
    strings = [input() for _ in range(n)]
    return max(strings, key=len)
    
print(find_longest_string())