```
def max_water(n, m):
    for _ in range(n):
        column_heights = list(map(int, input("Enter the height of columns (space separated): ").split()))
        
    max_water = 0
    for left in range(m):
        min_height = float("inf")
        for right in range(left + 1, m):
            min_height = min(min_height, column_heights[right])
            max_water = max(max_water, min_height - column_heights[left] if min_height > column_heights[left] else 0)
    return max_water