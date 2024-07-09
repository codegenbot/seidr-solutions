from typing import List


def max_fill(grid: List[List[int]], capacity: int) -> int:
    def calculate_water(row):
        water = 0
        left_max = right_max = 0
        for i, cell in enumerate(row):
            if cell == 0:
                left_max = 0
            else:
                left_max = max(left_max, cell)
            if cell == 2:
                right_max = 0
            else:
                right_max = max(right_max, cell)
            water += min(left_max, right_max) - cell
        return water

    total_water = sum(calculate_water(row) for row in grid)
    return math.ceil(total_water / capacity)