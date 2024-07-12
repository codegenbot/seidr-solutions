def max_fill(n):
    m = int(input("Enter the number of columns: "))
    grid = [
        [
            (
                int(input(f"Enter value for row {i+1}, column {j+1}: "))
                if i < n and j < m
                else 0
            )
            for j in range(m)
        ]
        for i in range(n)
    ]
    total_water = 0
    max_capacity = 0
    for row in grid:
        for cell in row:
            if cell > 0 and cell > max_capacity:
                max_capacity = cell
            if cell > 0 and cell <= max_capacity:
                total_water += cell
    return math.ceil(total_water / (n * max_capacity))