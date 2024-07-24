def max_fill(grid, capacity):
    total_water = 0
    left_max = [0] * len(grid)
    right_max = [0] * len(grid)

    for i in range(len(grid)):
        if i == 0:
            left_max[i] = grid[i][0]
        else:
            left_max[i] = max(left_max[i - 1], grid[i][0])

    for i in reversed(range(len(grid))):
        if i == len(grid) - 1:
            right_max[i] = grid[i][len(grid[0]) - 1]
        else:
            right_max[i] = max(right_max[i + 1], grid[i][len(grid[0]) - 1])

    for i in range(len(grid)):
        left_height = left_max[i]
        right_height = right_max[i]

        width = len(grid[0])
        min_height = min(left_height, right_height)

        if left_height < right_height:
            height_to_fill = min(min_height, min(left_height, right_height) - 1)
            total_water += height_to_fill // capacity
        else:
            height_to_fill = min(min_height, min(left_height, right_height) - 1)
            total_water += height_to_fill // capacity

    return int(total_water)


def main():
    n = int(input("Enter the number of rows: "))
    m = int(input("Enter the number of columns: "))

    grid = []
    for i in range(n):
        row = list(map(int, input(f"Enter {m} values for row {i+1}: ").split()))
        grid.append(row)

    capacity = int(input("Enter the capacity: "))

    print(max_fill(grid, capacity))


if __name__ == "__main__":
    main()