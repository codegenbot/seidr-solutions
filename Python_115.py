def max_fill(grid, capacity):
    import math

    def count_wells(grid):
        return sum(sum(row) for row in grid)

    def extract_water(grid, capacity):
        count = 0
        while count_wells(grid) > 0:
            buckets = 0
            for row in grid:
                for i in range(len(row)):
                    if row[i] == 1:
                        row[i] = 0
                        buckets += 1
                        if buckets == capacity:
                            break
                if buckets == capacity:
                    break
            count += 1
        return count

    return extract_water(grid, capacity)