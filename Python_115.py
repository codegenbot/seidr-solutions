import math


def max_fill():
    grid = []
    n = int(input("Enter number of rows: "))
    m = int(input("Enter number of columns: "))

    for i in range(n):
        row = list(
            map(int, input("Enter the values for row {}: ".format(i + 1)).split())
        )
        grid.append(row)

    capacity = int(input("Enter the bucket capacity: "))

    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    print("The maximum number of buckets needed is: ", buckets_needed)


max_fill()