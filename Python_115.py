class Solution:
    def max_fill(self, grid, capacity):
        total_water = sum(sum(row) for row in grid)
        return math.ceil(total_water / capacity)