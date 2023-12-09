
def max_fill(grid, capacity):
	# Initialize variables
	n = len(grid)
	m = len(grid[0])
	water = 0
	count = 0

	# Loop through each well in the grid
	for i in range(n):
		for j in range(m):
			# If the current well has water, try to fill it with the bucket
			if grid[i][j] == 1:
				water += capacity - grid[i][j]
				count += 1

	return count