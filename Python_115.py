```
def max_water(n, m):
    max_water = 0
    for left in range(m):
        min_height = float("inf")
        for right in range(left + 1, m):
            min_height = min(
                min_height,
                [input(f"Enter the height of column {i}: ").split() for i in range(n)][right],
            )
            max_water = max(
                max_water,
                (
                    (min_height - [input(f"Enter the height of column {i}: ").split() for i in range(n)][left][0])
                    if min_height > [input(f"Enter the height of column {i}: ").split() for i in range(n)][left][0]
                    else 0
                ),
            )
    return max_water

n = int(input("Enter the number of rows: "))
m = int(input("Enter the number of columns: "))

max_fill = max_water(n, m)
print(max_fill)