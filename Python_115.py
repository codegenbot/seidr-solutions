total_volume = 0
for row in range(rows):
    for col, val in enumerate(grid[row]):
        if is_valid(row, col):
            total_volume += val

return (
    math.ceil(total_volume / float(capacity))
    if total_volume % capacity != 0
    else math.floor(total_volume / float(capacity))
)