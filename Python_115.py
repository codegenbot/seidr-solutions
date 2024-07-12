```
def max_fill(m):
    n = m[0].__len__()
    m = [
        [
            (
                int(input(f"Enter value for row {i+1}, column {j+1}: "))
                if i < len(m) and j < n
                else 0
            )
            for j in range(n)
        ]
        for i in range(len(m))
    ]
    total_water = 0
    max_capacity = 0
    for row in m:
        for cell in row:
            if cell > 0 and cell > max_capacity:
                max_capacity = cell
            if cell > 0 and cell <= max_capacity:
                total_water += cell
    return math.ceil(total_water / (n * max_capacity))