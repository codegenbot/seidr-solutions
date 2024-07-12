```
def min_length(all_paths):
    return min(sum(int(digit) for digit in path) for path in all_paths)

print(min_length(['123', '456', '789']))